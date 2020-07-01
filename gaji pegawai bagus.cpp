#include <iostream>
using namespace std;

int main(){
char golongan, status, anak;
int gaji_pokok, tunjangan , tunjangan_keluarga, total;

    cout << "Input Golongan (A/B/C)         : ";cin>>golongan;
    cout << "Status Menikah/Single (M/S)    : ";cin>>status;
    if(status == 'M'){
        cout << "Jenis Kelamin Anak (L/P/0) : ";cin>>anak;}

switch(golongan){
case 'A':
    gaji_pokok=1000000; tunjangan=5000000;
    break;
case 'B':
    gaji_pokok=750000; tunjangan=2000000;
    break;
case 'C':
    gaji_pokok=500000; tunjangan=1000000;
    break;
default :
    cout << "Input yang anda masukan salah";
    break;
}
if(status=='M'){
    if(anak=='L'){
        tunjangan_keluarga=(0.25*gaji_pokok)+(0.1*gaji_pokok);
    }
    else if(anak=='P'){
        tunjangan_keluarga=0.25*gaji_pokok+0.07*gaji_pokok;
    }
    else if(anak=='0'){
        tunjangan_keluarga=0.25*gaji_pokok;
    }
    else {
        cout << "Input salah";
    }
}
else if(status=='S'){
    tunjangan_keluarga=0;
}
else {
    cout << "Input salah";
}

        total = gaji_pokok+tunjangan+tunjangan_keluarga;
    cout << "Golongan               : "<<golongan<<endl;
    cout << "Gaji Pokok             : "<<gaji_pokok<<endl;
    cout << "Tunjangan              : "<<tunjangan<<endl;
if (tunjangan_keluarga>0){
    cout << "Tunjangan Keluarga     : "<<tunjangan_keluarga<<endl;}
    cout << "Total                  : "<<total<<endl;
return 0;
}
