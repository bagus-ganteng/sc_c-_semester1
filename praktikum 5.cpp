#include <iostream>
using namespace std;

int main(){
int gj_pokok, tj_jb, tj_kl, tj_ank_lk, tj_ank_pr, gj_total, gol;
char nikah, anak, anak2;
string nama, nik;

cout << "= = = = APLIKASI DAFTAR GAJI = = = ="<<endl;
cout << "= = = = PT. BAGUS GANTENG = = = ="<<endl;
cout << "Nama                               : ";getline(cin,nama);
cout << "NIK                                : ";getline(cin,nik);
cout << "Golongan                           : ";cin>>gol;
cout << "Apakah anda sudah menikah?         : ";cin>>nikah;
cout << "Apakah anda sudah memiliki anak?   : ";cin>>anak;
cout << "Apakah anak anda laki-laki?        : ";cin>>anak2;

/*
if (gol =='A' || gol == 'a') gj_pokok=1000000, tj_jb=5000000;
if (gol =='B' || gol == 'b') gj_pokok=750000, tj_jb=2000000;
if (gol =='C' || gol == 'c') gj_pokok=500000, tj_jb=1000000;

if (nikah == 'y' || nikah == 'Y'){
    if (anak == 'y'|| anak == 'Y'){
        if (anak2 == 'y'|| anak2 == 'Y'){
            tj_kl=gj_pokok*0.25;
            tj_ank_lk=gj_pokok*0.1;
        }else if (anak2 == 'n'){
            tj_kl=gj_pokok*0.25;
            tj_ank_pr=gj_pokok*0.07;

}
}
}*/
    switch(gol)
case 1 :
    gj_pokok=1000000;
    tj_jb=5000000;
if (nikah == 'y' || nikah == 'Y'){
    if (anak == 'y' || anak2 == 'Y'){
        if (anak2 == 'y' || anak2 == 'Y'){
                tj_kl=gj_pokok*0.25;
            tj_ank_lk=gj_pokok*0.1;
            tj_ank_pr=0;
            gj_total=gj_pokok+tj_jb+tj_kl+tj_ank_lk;
        }if(anak2 == 'n' || anak2 == 'N'){
            tj_kl=gj_pokok*0.25;
            tj_ank_pr=gj_pokok*0.07;
            tj_ank_lk=0;
        gj_total=gj_pokok+tj_jb+tj_kl+tj_ank_pr;
        }
    }
    if(anak == 'n' || anak == 'N'){
        tj_kl=gj_pokok*0.25;
    gj_total=gj_pokok+tj_jb+tj_kl;
    }
}
if (nikah == 'N' || nikah == 'n'){
    gj_total=gj_pokok+tj_jb;
}
gj_total=gj_pokok+tj_jb+tj_kl+tj_ank_lk;

cout << "== Menampilkan Rincian Gaji =="<<endl<<endl;

cout << "Nama                   : "<<nama<<endl;
cout << "NIK                    : "<<nik<<endl;
cout << "Gaji Pokok             : "<<gj_pokok<<endl;
cout << "Tunjangan Jabatan      : "<<tj_jb<<endl;
cout << "Tunjangan Keluarga     : "<<tj_kl<<endl;
cout << "Tunjangan Anak LK      : "<<tj_ank_lk<<endl;
cout << "Tunjangan Anak PR      : "<<tj_ank_pr<<endl;
cout << "Total                  : "<<gj_total<<endl;

return 0;
}
