#include <iostream>
using namespace std;

int main(){

int masuk, keluar, lama, biaya;

cout << "Jam Masuk  : "; cin >> masuk;
cout << "Jam Keluar : "; cin >> keluar;

lama = keluar-masuk;

if (lama <= 1){
    biaya = 2000;
}else{
biaya = 2000 + 500*(lama-1);
}
cout << "\n\n ";
cout << "Jam Masuk      : "<<masuk<<endl;
cout << "Jam Keluar     : "<<keluar<<endl;
cout << "Lama Parkir    : "<<lama<<endl;
cout << "Biaya Parkir   : "<<biaya<<endl;


return 0;
}
