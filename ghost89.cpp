
#include "iostream"
#include "fstream"
using namespace std;
void GOST(bool mode)
{
 //--8 S-box'ов----------------------------------------
 int Sbox[8][16] =
 {
 {4,10,9,2,13,8,0,14,6,11,1,12,7,15,5,3},
 {14,11,4,12,6,13,15,10,2,3,8,1,0,7,5,9},
 {5,8,1,13,10,3,4,2,14,15,12,7,6,0,9,11},
 {7,13,10,1,0,8,9,15,14,4,6,12,11,2,5,3},
 {6,12,7,1,5,15,13,8,4,10,9,14,0,3,11,2},
 {4,11,10,0,7,2,1,13,3,6,8,5,9,12,15,14},
 {13,11,4,1,3,15,5,9,0,10,14,7,6,8,2,12},
 {1,15,13,0,5,7,10,4,9,2,3,14,6,11,8,12}
 };
 //--Ключ шифрования и его разбиение--------------------
 char s[33] = "98765432109876543210987654321098";
 int key[8];
 for(int i = 0; i<8; i++)
 {
 key[i] = (s[4*i]<<24) + (s[1+4*i]<<16) + (s[2+4*i]<<8) + s[3+4*i]; //Складывание каждых 4-х символов ключа в одно число
 }

 FILE* f;
 FILE* g;
 int fsize;
 if(mode == 0)
 {
 f = fopen("pr1.txt", "rb+");
 fseek (f, 0, SEEK_END);
 fsize = ftell(f);
 fseek (f, 0, SEEK_SET);
 g = fopen("shifr.txt", "rb+");
 }
 if(mode == 1)
 {
 f = fopen("shifr.txt", "rb+");
 fseek (f, 0, SEEK_END);
 fsize = ftell(f);
 fseek (f, 0, SEEK_SET);
 g = fopen("pr1_1.txt", "rb+");
 }

 while(fsize)
 {
 int A = 0;
 int B = 0;
 for(int i = 0; i<4; i++)
 {
 if(fsize)
 {
 int s = 0;
 fread(&s, 1, 1, f);

 A += (s<<(24-(i*8)));
 fsize--;
 }
 else A += (64<<(24-(i*8)));
 }

 for(int i = 0; i<4; i++)
 {
 if(fsize)
 {
 int s = 0;
 fread(&s, 1, 1, f);
 B += (s<<(24-(i*8)));
 fsize--;
 }
 else B += (64<<(24-(i*8)));
 }



 int T;

 //--32 раунда--------------------------------------
 for(int i = 0; i<32; i++)
 {
 T = 0;
 if(mode == 0)
 {
 if(i<24) T = (A+key[i%8]) % 0x100000000;
 else T = (A+key[7-(i%8)]) % 0x100000000;
 }
 if(mode == 1)
 {
 if(i<8) T = (A+key[i%8]) % 0x100000000;
 else T = (A+key[7-(i%8)]) % 0x100000000;
 }
 int Fragments[8] = // Разбиение на 4-битные фрагменты
 {
 (T & 0xF0000000)>>28,
 (T & 0xF000000)>>24,
 (T & 0xF00000)>>20,
 (T & 0xF0000)>>16,
 (T & 0xF000)>>12,
 (T & 0xF00)>> 8,
 (T & 0xF0)>> 4,
 (T & 0xF)
 };
 for(int j = 0; j<8; j++)
 {
 Fragments[j] = Sbox[j][Fragments[j]]; // Пропуск фрагментов черезSbox'ы
 }
 T = (Fragments[0]<<28) + // Сборка фрагментов обратно в 64-битныйподблок
 (Fragments[1]<<24) +
 (Fragments[2]<<20) +
 (Fragments[3]<<16) +
 (Fragments[4]<<12) +
 (Fragments[5]<< 8) +
 (Fragments[6]<< 4) +
 Fragments[7];
 T = (T<<11)|(T>>21); // Циклическое смещение влево на 11 бит
 T ^= B; // XOR с B
 if(i != 31)
 {
 B = A; // Перестановка подблоков 1-31 и 32 циклов
 A = T;
 }
 else
 {
 B = T;
 }
 }
 //--Коненц 32 раундов---------------------------


 T = (A & 0xFF000000)>>24; fwrite(&T, 1, 1, g);
 T = (A & 0xFF0000)>>16; fwrite(&T, 1, 1, g);
 T = (A & 0xFF00)>>8; fwrite(&T, 1, 1, g);
 T = (A & 0xFF); fwrite(&T, 1, 1, g);

 T = (B & 0xFF000000)>>24; fwrite(&T, 1, 1, g);
 T = (B & 0xFF0000)>>16; fwrite(&T, 1, 1, g);
 T = (B & 0xFF00)>>8; fwrite(&T, 1, 1, g);
 T = (B & 0xFF); fwrite(&T, 1, 1, g);
 }
 fclose(f);
 fclose(g);
}
int main()
{
 GOST(0);
 GOST(1);
return 0;
}
