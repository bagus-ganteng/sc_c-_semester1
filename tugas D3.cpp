#include<iostream>
#include<windows.h>
using namespace std;

int main(){
    system("color c");
    string nama, nim, huruf;
    int uts,uas,tugas,akhir;

    cout << "Nama       : "; getline(cin,nama);
    cout << "NIM        : "; getline(cin,nim);
    cout << "Nilai UTS  : "; cin>>uts;
    cout << "Nilai UAS  : "; cin>>uas;
    cout << "Nilai Tugas: "; cin>>tugas;

    akhir =(0.4*uts)+(0.4*uas)+(0.2*tugas);

    if (akhir >80 || akhir <= 100) {
            huruf="A";
    }
    else if(akhir >60 || akhir <= 80) {
            huruf="B";
    }
    else if(akhir >40 || akhir <= 60) {
            huruf="C";
    }
    else if(akhir >20 || akhir <= 40) {
            huruf="D";
    }
    else if(akhir >0  || akhir <= 20) {
            huruf="E";
    }

    cout << "= = = = = = = = = = "<<endl<<endl;
    cout << "Nama       : "<<nama<<endl;
    cout << "NIM        : "<<nim<<endl;
    cout << "Nilai UTS  : "<<uts<<endl;
    cout << "Nilai UAS  : "<<uas<<endl;
    cout << "Nilai Tugas: "<<tugas<<endl;
    cout << "Nilai Akhir: "<<akhir<<endl;
    cout << "Nilai Huruf: "<<huruf<<endl;
    return 0;
}
