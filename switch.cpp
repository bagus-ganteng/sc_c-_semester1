#include<iostream>
using namespace std;

int main(){
    char a;

    cout << "Masukan nilai : ";cin>>a;
    switch(a){
case "A":
    cout << "Ini adalah angka 1";
    break;
case "B":
    cout << "Ini adalah angka 2";
    break;
default :
    cout << "Input yang anda masukan salah";
    break;
    }

    return 0;
}
