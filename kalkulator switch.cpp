#include <iostream>
using namespace std;

int main (){
float a,b,hasil;

cout << "Pilih operator \n1.+ \n2.- \n3.* \n4./";
cout << "Masukan nilai pertama  : ";cin>>a;
cout << "Masukan nilai kedua    : ";cin>>b;
cout << "Pilih operator +,-,*,/ : ";cin>>hasil;

switch(op){
case 1:
    hasil = a+b;
    break;
}
cout << "Hasil penjumlahan "<<a<<" + "<<b<<" adalah "<<hasil;
return 0;
}
