#include <stdio.h>
#include <iostream>
#include <cmath>
#include <bitset>
using namespace std;



main()
{
    //long long a = 0b01000010010000010110110101100101;
  //  long long b = 0b01101101011001010110111001110100;
  //  long long c = 0b01101111011100110110010101100111;
   // long long d = 0b01101011011100110010101000110001;
   long long a=1111584101;
   long long b=1835363956;
   long long c=1869833575;
   long long d=1802709553;

   cout<<"------------1---------"<<endl;

    long long f=(b^c^d);

    cout<<"b^c^d="<<bitset<32>(f)<<endl;

    long long p1,p2;

    p1=(a+f) %0b100000000000000000000000000000000;
    cout<<"a+f mod 2^32="<<bitset<32>(p1)<<endl;

    p2=(p1+0)%0b100000000000000000000000000000000;
    cout<<"P(2)+Mi mod 2^32 ="<<bitset<32>(p2)<<endl;

    long long shift;

    shift=p2<<3;

    cout<<"Shift="<<bitset<32>(shift)<<endl;

    long long t1,t2,t3,t4;

    t1=shift;
    t2=b;
    t3=c;
    t4=d;

    a=t4;
    b=t1;
    c=t2;
    d=t3;

    cout<<"a="<<bitset<32>(a)<<endl;
    cout<<"b="<<bitset<32>(b)<<endl;
    cout<<"c="<<bitset<32>(c)<<endl;
    cout<<"d="<<bitset<32>(d)<<endl;

    cout<<"------------2---------"<<endl;

   f=(b^c^d);

    cout<<"b^c^d="<<f<<endl;

    p1=(a+f) %0b100000000000000000000000000000000;
    cout<<"a+f mod 2^32="<<p1<<endl;

    p2=(p1+1)%0b100000000000000000000000000000000;
    cout<<"P(2)+Mi mod 2^32 ="<<p2<<endl;

     shift;

    shift=p2<<7;

    cout<<"Shift="<<bitset<48>(shift)<<endl;

    t1=shift;
    t2=b;
    t3=c;
    t4=d;

    a=t4;
    b=t1;
    c=t2;
    d=t3;

    cout<<"a="<<bitset<48>(a)<<endl;
    cout<<"b="<<bitset<48>(b)<<endl;
    cout<<"c="<<bitset<48>(c)<<endl;
    cout<<"d="<<bitset<48>(d)<<endl;

    cout<<"------------3---------"<<endl;

   f=(b^c^d);

    cout<<"b^c^d="<<bitset<48>(f)<<endl;

    p1=(a+f) %0b100000000000000000000000000000000;
    cout<<"a+f mod 2^32="<<bitset<48>(p1)<<endl;

    p2=(p1+2)%0b100000000000000000000000000000000;
    cout<<"P(2)+Mi mod 2^32 ="<<bitset<48>(p2)<<endl;

     shift;

    shift=p2<<11;

    cout<<"Shift="<<bitset<48>(shift)<<endl;

    t1=shift;
    t2=b;
    t3=c;
    t4=d;

    a=t4;
    b=t1;
    c=t2;
    d=t3;

    cout<<"a="<<bitset<48>(a)<<endl;
    cout<<"b="<<bitset<48>(b)<<endl;
    cout<<"c="<<bitset<48>(c)<<endl;
    cout<<"d="<<bitset<48>(d)<<endl;

    cout<<"------------4---------"<<endl;

   f=(b^c^d);

    cout<<"b^c^d="<<bitset<48>(f)<<endl;

    p1=(a+f) %0b100000000000000000000000000000000;
    cout<<"a+f mod 2^32="<<bitset<48>(p1)<<endl;

    p2=(p1+3)%0b100000000000000000000000000000000;
    cout<<"P(2)+Mi mod 2^32 ="<<bitset<64>(p2)<<endl;

     shift;

    shift=p2<<19;

    cout<<"Shift="<<bitset<64>(shift)<<endl;

    t1=shift;
    t2=b;
    t3=c;
    t4=d;

    a=t4;
    b=t1;
    c=t2;
    d=t3;

    cout<<"a="<<bitset<64>(a)<<endl;
    cout<<"b="<<bitset<64>(b)<<endl;
    cout<<"c="<<bitset<64>(c)<<endl;
    cout<<"d="<<bitset<64>(d)<<endl;
    cout<<"------------5---------"<<endl;

   f=(b^c^d);

    cout<<"b^c^d="<<bitset<64>(f)<<endl;

    p1=(a+f) %0b100000000000000000000000000000000;
    cout<<"a+f mod 2^32="<<bitset<64>(p1)<<endl;

    p2=(p1+4)%0b100000000000000000000000000000000;
    cout<<"P(2)+Mi mod 2^32 ="<<bitset<64>(p2)<<endl;

     shift;

    shift=p2<<3;

    cout<<"Shift="<<bitset<64>(shift)<<endl;

    t1=shift;
    t2=b;
    t3=c;
    t4=d;

    a=t4;
    b=t1;
    c=t2;
    d=t3;

    cout<<"a="<<bitset<64>(a)<<endl;
    cout<<"b="<<bitset<64>(b)<<endl;
    cout<<"c="<<bitset<64>(c)<<endl;
    cout<<"d="<<bitset<64>(d)<<endl;
    cout<<"------------6---------"<<endl;

   f=(b^c^d);

    cout<<"b^c^d="<<bitset<64>(f)<<endl;

    p1=(a+f) %0b100000000000000000000000000000000;
    cout<<"a+f mod 2^32="<<bitset<64>(p1)<<endl;

    p2=(p1+5)%0b100000000000000000000000000000000;
    cout<<"P(2)+Mi mod 2^32 ="<<bitset<64>(p2)<<endl;

     shift;

    shift=p2<<7;

    cout<<"Shift="<<bitset<64>(shift)<<endl;

    t1=shift;
    t2=b;
    t3=c;
    t4=d;

    a=t4;
    b=t1;
    c=t2;
    d=t3;

    cout<<"a="<<bitset<64>(a)<<endl;
    cout<<"b="<<bitset<64>(b)<<endl;
    cout<<"c="<<bitset<64>(c)<<endl;
    cout<<"d="<<bitset<64>(d)<<endl;
    cout<<"------------7---------"<<endl;

   f=(b^c^d);

    cout<<"b^c^d="<<bitset<64>(f)<<endl;

    p1=(a+f) %0b100000000000000000000000000000000;
    cout<<"a+f mod 2^32="<<bitset<64>(p1)<<endl;

    p2=(p1+6)%0b100000000000000000000000000000000;
    cout<<"P(2)+Mi mod 2^32 ="<<bitset<64>(p2)<<endl;

     shift;

    shift=p2<<11;

    cout<<"Shift="<<bitset<64>(shift)<<endl;

    t1=shift;
    t2=b;
    t3=c;
    t4=d;

    a=t4;
    b=t1;
    c=t2;
    d=t3;

    cout<<"a="<<bitset<64>(a)<<endl;
    cout<<"b="<<bitset<64>(b)<<endl;
    cout<<"c="<<bitset<64>(c)<<endl;
    cout<<"d="<<bitset<64>(d)<<endl;
    cout<<"------------8---------"<<endl;

   f=(b^c^d);

    cout<<"b^c^d="<<bitset<64>(f)<<endl;

    p1=(a+f) %0b100000000000000000000000000000000;
    cout<<"a+f mod 2^32="<<bitset<64>(p1)<<endl;

    p2=(p1+7)%0b100000000000000000000000000000000;
    cout<<"P(2)+Mi mod 2^32 ="<<bitset<64>(p2)<<endl;

     shift;

    shift=p2<<19;

    cout<<"Shift="<<bitset<64>(shift)<<endl;

    t1=shift;
    t2=b;
    t3=c;
    t4=d;

    a=t4;
    b=t1;
    c=t2;
    d=t3;

    cout<<"a="<<bitset<64>(a)<<endl;
    cout<<"b="<<bitset<64>(b)<<endl;
    cout<<"c="<<bitset<64>(c)<<endl;
    cout<<"d="<<bitset<64>(d)<<endl;
    cout<<"------------9---------"<<endl;

   f=(b^c^d);

    cout<<"b^c^d="<<bitset<64>(f)<<endl;

    p1=(a+f) %0b100000000000000000000000000000000;
    cout<<"a+f mod 2^32="<<bitset<64>(p1)<<endl;

    p2=(p1+8)%0b100000000000000000000000000000000;
    cout<<"P(2)+Mi mod 2^32 ="<<bitset<64>(p2)<<endl;

     shift;

    shift=p2<<3;

    cout<<"Shift="<<bitset<64>(shift)<<endl;

    t1=shift;
    t2=b;
    t3=c;
    t4=d;

    a=t4;
    b=t1;
    c=t2;
    d=t3;

    cout<<"a="<<bitset<64>(a)<<endl;
    cout<<"b="<<bitset<64>(b)<<endl;
    cout<<"c="<<bitset<64>(c)<<endl;
    cout<<"d="<<bitset<64>(d)<<endl;
cout<<"------------10---------"<<endl;

   f=(b^c^d);

    cout<<"b^c^d="<<bitset<64>(f)<<endl;

    p1=(a+f) %0b100000000000000000000000000000000;
    cout<<"a+f mod 2^32="<<bitset<64>(p1)<<endl;

    p2=(p1+9)%0b100000000000000000000000000000000;
    cout<<"P(2)+Mi mod 2^32 ="<<bitset<64>(p2)<<endl;

     shift;

    shift=p2<<7;

    cout<<"Shift="<<bitset<64>(shift)<<endl;

    t1=shift;
    t2=b;
    t3=c;
    t4=d;

    a=t4;
    b=t1;
    c=t2;
    d=t3;

    cout<<"a="<<bitset<64>(a)<<endl;
    cout<<"b="<<bitset<64>(b)<<endl;
    cout<<"c="<<bitset<64>(c)<<endl;
    cout<<"d="<<bitset<64>(d)<<endl;
    cout<<"------------11---------"<<endl;

   f=(b^c^d);

    cout<<"b^c^d="<<bitset<64>(f)<<endl;

    p1=(a+f) %0b100000000000000000000000000000000;
    cout<<"a+f mod 2^32="<<bitset<64>(p1)<<endl;

    p2=(p1+10)%0b100000000000000000000000000000000;
    cout<<"P(2)+Mi mod 2^32 ="<<bitset<64>(p2)<<endl;

     shift;

    shift=p2<<11;

    cout<<"Shift="<<bitset<64>(shift)<<endl;

    t1=shift;
    t2=b;
    t3=c;
    t4=d;

    a=t4;
    b=t1;
    c=t2;
    d=t3;

    cout<<"a="<<bitset<64>(a)<<endl;
    cout<<"b="<<bitset<64>(b)<<endl;
    cout<<"c="<<bitset<64>(c)<<endl;
    cout<<"d="<<bitset<64>(d)<<endl;
    cout<<"------------12---------"<<endl;

   f=(b^c^d);

    cout<<"b^c^d="<<bitset<64>(f)<<endl;

    p1=(a+f) %0b100000000000000000000000000000000;
    cout<<"a+f mod 2^32="<<bitset<64>(p1)<<endl;

    p2=(p1+11)%0b100000000000000000000000000000000;
    cout<<"P(2)+Mi mod 2^32 ="<<bitset<64>(p2)<<endl;

     shift;

    shift=p2<<19;

    cout<<"Shift="<<bitset<64>(shift)<<endl;

    t1=shift;
    t2=b;
    t3=c;
    t4=d;

    a=t4;
    b=t1;
    c=t2;
    d=t3;

    cout<<"a="<<bitset<64>(a)<<endl;
    cout<<"b="<<bitset<64>(b)<<endl;
    cout<<"c="<<bitset<64>(c)<<endl;
    cout<<"d="<<bitset<64>(d)<<endl;
    cout<<"------------13---------"<<endl;

   f=(b^c^d);

    cout<<"b^c^d="<<bitset<64>(f)<<endl;

    p1=(a+f) %0b100000000000000000000000000000000;
    cout<<"a+f mod 2^32="<<bitset<64>(p1)<<endl;

    p2=(p1+12)%0b100000000000000000000000000000000;
    cout<<"P(2)+Mi mod 2^32 ="<<bitset<64>(p2)<<endl;

     shift;

    shift=p2<<3;

    cout<<"Shift="<<bitset<64>(shift)<<endl;

    t1=shift;
    t2=b;
    t3=c;
    t4=d;

    a=t4;
    b=t1;
    c=t2;
    d=t3;

    cout<<"a="<<bitset<64>(a)<<endl;
    cout<<"b="<<bitset<64>(b)<<endl;
    cout<<"c="<<bitset<64>(c)<<endl;
    cout<<"d="<<bitset<64>(d)<<endl;
    cout<<"------------14---------"<<endl;

   f=(b^c^d);

    cout<<"b^c^d="<<bitset<64>(f)<<endl;

    p1=(a+f) %0b100000000000000000000000000000000;
    cout<<"a+f mod 2^32="<<bitset<64>(p1)<<endl;

    p2=(p1+13)%0b100000000000000000000000000000000;
    cout<<"P(2)+Mi mod 2^32 ="<<bitset<64>(p2)<<endl;

     shift;

    shift=p2<<7;

    cout<<"Shift="<<bitset<64>(shift)<<endl;

    t1=shift;
    t2=b;
    t3=c;
    t4=d;

    a=t4;
    b=t1;
    c=t2;
    d=t3;

    cout<<"a="<<bitset<64>(a)<<endl;
    cout<<"b="<<bitset<64>(b)<<endl;
    cout<<"c="<<bitset<64>(c)<<endl;
    cout<<"d="<<bitset<64>(d)<<endl;
    cout<<"------------15---------"<<endl;

   f=(b^c^d);

    cout<<"b^c^d="<<bitset<64>(f)<<endl;

    p1=(a+f) %0b100000000000000000000000000000000;
    cout<<"a+f mod 2^32="<<bitset<64>(p1)<<endl;

    p2=(p1+14)%0b100000000000000000000000000000000;
    cout<<"P(2)+Mi mod 2^32 ="<<bitset<64>(p2)<<endl;

     shift;

    shift=p2<<11;

    cout<<"Shift="<<bitset<64>(shift)<<endl;

    t1=shift;
    t2=b;
    t3=c;
    t4=d;

    a=t4;
    b=t1;
    c=t2;
    d=t3;

    cout<<"a="<<bitset<64>(a)<<endl;
    cout<<"b="<<bitset<64>(b)<<endl;
    cout<<"c="<<bitset<64>(c)<<endl;
    cout<<"d="<<bitset<64>(d)<<endl;
    cout<<"------------16---------"<<endl;

   f=(b^c^d);

    cout<<"b^c^d="<<bitset<64>(f)<<endl;

    p1=(a+f) %0b100000000000000000000000000000000;
    cout<<"a+f mod 2^32="<<bitset<64>(p1)<<endl;

    p2=(p1+15)%0b100000000000000000000000000000000;
    cout<<"P(2)+Mi mod 2^32 ="<<bitset<64>(p2)<<endl;

     shift;

    shift=p2<<19;

    cout<<"Shift="<<bitset<64>(shift)<<endl;

    t1=shift;
    t2=b;
    t3=c;
    t4=d;

    a=t4;
    b=t1;
    c=t2;
    d=t3;

    cout<<"a="<<bitset<64>(a)<<endl;
    cout<<"b="<<bitset<64>(b)<<endl;
    cout<<"c="<<bitset<64>(c)<<endl;
    cout<<"d="<<bitset<64>(d)<<endl;
}
