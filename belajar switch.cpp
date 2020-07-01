#include <iostream>
using namespace std;

int main(){
int angka;
string bulan;

cout << "Masukan Angka      : "; cin >> angka;
switch(angka)
{
case 1 :
    bulan = "Januari";
    break;
case 2 :
    bulan = "Februari";
    break;
case 3 :
    bulan = "Maret";
    break;
default:
    bulan = "Tidak ada";
    break;
}
cout << "Angka "<<angka<< " adalah bulan "<<bulan;
return 0;
}
