#include <iostream>
#include <conio.h>
#include <windows.h>
using namespace std;
int main(){
system("color b");
int kode_gol;
int gol_1=1500000;
int gol_2=2000000;
int gol_3=2500000;
int gol_4=3000000;
int gj_1=gol_1+(gol_1*0.1);
int gj_2=gol_2+(gol_2*0.1);
int gj_3=gol_3+(gol_3*0.1);
int gj_4=gol_4+(gol_4*0.1);
string nama;
string nik;
        cout<<"Nama     :   ";
        getline(cin,nama);
        cout<<"NIK      :   ";
        getline(cin,nik);
        cout<<"Golongan :   ";
        cin>>kode_gol;
        cout<< ""<<endl<<endl;
        cout<< "===================================="<<endl<<endl;
    if(kode_gol == 1){
        cout<<"Nama     :   "<<nama<<endl;
        cout<<"NIK      :   "<<nik<<endl;
        cout<<"Golongan :   1"<<endl;
        cout<<"Gaji     :   "<<gol_1<<endl;
        cout<<"Tunjangan:   "<<gol_1*0.1<<endl<<endl;
    cout<<"===================================="<<endl<<endl;
    cout<<"Total Gaji Bersih = "<<gj_1<<endl;
    }
     else if(kode_gol == 2){
        cout<<"Nama     :   "<<nama<<endl;
        cout<<"NIK      :   "<<nik<<endl;
        cout<<"Golongan :   2"<<endl;
        cout<<"Gaji     :   "<<gol_2<<endl;
        cout<<"Tunjangan:   "<<gol_2*0.1<<endl<<endl;
    cout<<"===================================="<<endl<<endl;
    cout<<"Total Gaji Bersih = "<<gj_2<<endl;
    }
     else if(kode_gol == 3){
        cout<<"Nama     :   "<<nama<<endl;
        cout<<"NIK      :   "<<nik<<endl;
        cout<<"Golongan :   3"<<endl;
        cout<<"Gaji     :   "<<gol_3<<endl;
        cout<<"Tunjangan:   "<<gol_3*0.1<<endl<<endl;
    cout<<"===================================="<<endl<<endl;
    cout<<"Total Gaji Bersih = "<<gj_3<<endl;
    }
     else if(kode_gol == 4){
        cout<<"Nama     :   "<<nama<<endl;
        cout<<"NIK      :   "<<nik<<endl;
        cout<<"Golongan :   4"<<endl;
        cout<<"Gaji     :   "<<gol_4<<endl;
        cout<<"Tunjangan:   "<<gol_4*0.1<<endl<<endl;
    cout<<"===================================="<<endl<<endl;
    cout<<"Total Gaji Bersih = "<<gj_4<<endl;
    }
getch();
}
