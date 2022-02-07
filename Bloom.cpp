
#include <iostream>

using namespace std;
#define R1 3
#define C1 3
#define R2 3
#define C2 1

int main(void) {

    int mat1[R1][C1] = {
            {3, 8, 2},
            {4, 2, 3},
            {4, 7, 1}
    };

    int mat2[R2][C2] = {
            {2},
            {7},
            {8}
    };

    int mat3[R2][C2]={
    {9},
    {4},
    {8}
    };


    int rslt1[R1][C2];
    int rslt2[R1][C2];
    int k1[R1][C2];
    int k2[R1][C2];
     cout<<"L1"<<endl<<endl;

    for (int i = 0; i < R1; i++) {
        for (int j = 0; j < C2; j++) {
            rslt1[i][j] = 0;

            for (int k = 0; k < R2; k++) {
                rslt1[i][j] += mat1[i][k] * mat2[k][j];
            }

            cout << rslt1[i][j] << "\t";
        }

        cout << endl;
    }

     cout<<endl<<"L2"<<endl<<endl;
       for (int i = 0; i < R1; i++) {
        for (int j = 0; j < C2; j++) {
            rslt2[i][j] = 0;

            for (int k = 0; k < R2; k++) {
                rslt2[i][j] += mat1[i][k] * mat3[k][j];
            }

            cout << rslt2[i][j] << "\t";
        }

        cout << endl;
    }
    cout<<endl<<"k1/2"<<endl<<endl;
      int s1=0,r1=0;
           for (int i = 0; i < R1; i++) {
        for (int j = 0; j < C2; j++) {
            k1[i][j] = 0;

                k1[i][j] += rslt1[i][j] * mat3[i][j];

            cout << k1[i][j] << "\t";
            s1+=k1[i][j];
            r1=s1%17;

        }

        cout << endl;
    }
     cout<<"Rezultat1:"<<r1<<endl;
     cout<<endl<<"k2/1"<<endl<<endl;
      int s2=0,r2=0;
           for (int i = 0; i < R1; i++) {
        for (int j = 0; j < C2; j++) {
            k2[i][j] = 0;

                k2[i][j] += rslt2[i][j] * mat2[i][j];

            cout << k2[i][j] << "\t";
            s2+=k2[i][j];
            r2=s2%17;

        }

        cout << endl;
    }
     cout<<"Rezultat2:"<<r2<<endl;

    return 0;
}
