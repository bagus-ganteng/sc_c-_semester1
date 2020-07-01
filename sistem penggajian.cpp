#include <iostream>
using namespace std;

int main (){
string nama,nim;
int gol, tj, tj_kl, gj, gj_total, gt;
char nikah;

cout << "Nama               : ";getline(cin,nama);
cout << "NIM                : ";getline(cin,nim);
    awal1 :
cout << "GOL        : ";cin >> gol;
cout << "= = = = = = = = = = ="<< endl<< endl;

if (gol == 1) gj=1000000, tj=5000000;
if (gol == 2) gj=750000, tj=2000000;
if (gol == 3) gj=500000, tj=1000000;
if (gol<1 || gol>3) {
    cout << "Golongan tidak tersedia. Masukan kembali : "<<endl;
    goto awal1;}

tj_kl=0.25*gj;
gj_total=gj+tj_kl+tj;

cout << "Nama               : "<<nama<<endl;
cout << "NIM                : "<<nim<<endl;
cout << "Golongan           : "<<gol<<endl;
cout << "Gaji Pokok         : "<<gj<<endl;
cout << "Tunjangan          : "<<tj<<endl;
cout << "Tunjangan Keluarga : "<<tj_kl<<endl;
cout << "Gaji diterima      : "<<gj_total<<endl;

    return 0;
}
