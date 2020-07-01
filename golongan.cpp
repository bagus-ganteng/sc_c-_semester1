#include<iostream>
using namespace std;

int g_pokok,g_bersih,tunjangan,golongan;
string nama,nik;

int main(){

    cout << "Masukan data diri Karyawan "<<endl<<endl;
    cout << "Nama       :   ";getline(cin,nama);
    cout << "NIK        :   ";getline(cin,nik);
    cout << "Golongan   :   ";cin>>golongan;

    if (golongan == 1) g_pokok=1500000;
    if (golongan == 2) g_pokok=2000000;
    if (golongan == 3) g_pokok=2500000;
    if (golongan == 4) g_pokok=3000000;

    tunjangan = g_pokok*0.1;
    g_bersih = g_pokok + tunjangan;

    cout << "Gaji Karyawan"<<endl<<endl;
    cout << "Nama       : "<<nama<<endl;
    cout << "NIK        : "<<nik<<endl;
    cout << "Gaji       : Rp. "<<g_pokok<<endl;
    cout << "Tunjangan  : Rp. "<<tunjangan<<endl;
    cout << "Gaji Bersih: Rp. "<<g_bersih<<endl;
    return 0;
}
