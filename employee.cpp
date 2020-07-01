#include <iostream>
using namespace std;

int main(){
float ipk=0;
int portofolio;
bool status;
string nama;
cout << "Siapa Nama Anda                               : ";getline(cin,nama);
cout << "Berapa IPK Anda                               : ";cin>>ipk;
cout << "Berapa Portofolio yang pernah anda kembangkan : ";cin>>portofolio;

if (ipk>=3.50){
    if(portofolio>=2){
        status = true;
    }else{
        status = false;
        }
}else{
    status = false;
}

if (status == false){
    cout << "Maaf, calon pegawai a/n "<<nama<<" tidak diterima"<<endl;
}else{
    cout << "Selamat, calon pegawai a/n "<<nama<<" diterima"<<endl;
    }

}
