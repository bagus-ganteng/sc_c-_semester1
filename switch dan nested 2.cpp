#include <iostream>

using namespace std;

int main(){
int tinggi;
char jenis;
bool status;

cout << "Jenis Kelamin (L/P): "; cin >> jenis;
cout << "Tinggi Badan       : "; cin >> tinggi;

if (jenis == 'L'){
    if (tinggi > 180){
        status = true;
    }else{
    status = false;
    }
}else {
status = false;}

if (jenis == 'P'){
    if (tinggi > 170){
        status = true;
    }else{
    status = false;
    }
}else{
status = false;
}

else {
    cout << "Input Error";
}

if (status = true){
    cout << "Selamat ";
}
else {
    cout << "Sorry"
}
}
