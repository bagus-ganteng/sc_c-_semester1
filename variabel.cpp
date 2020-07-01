#include <iostream>
/*
Rumus
Menghitung Luas Lingkaran
*/

using namespace std;

int main()
{
    float l,r;
    const float p=3.14;

    cout<< "Masukan nilai jari-jari:";
    cin>>r;

    l=p*r*r;

    cout<< "luas lingkaran adalah:"<<l;

    return 0;
}
