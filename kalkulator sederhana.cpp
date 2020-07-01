//KALKULATOR SEDERHANA

#include <iostream>
using namespace std;
int main (){

float a,b;
int op;

    menu :
    cout << "Operator :"<<endl;
    cout << "1. (+)"<<endl;
    cout << "2. (-)"<<endl;
    cout << "3. (x)"<<endl;
    cout << "4. (/)"<<endl<<endl;
    cout << "Masukan angka pertama : ";cin>>a;
    cout << "Masukan angka kedua   : ";cin>>b;
    cout << "Pilih operator        : ";cin>>op;
    if(op<1 || op>4){
            goto menu;
            }
    else if(op == 1){
        cout << "Hasil dari "<<a<<"+"<<b<<" adalah "<<a+b;
    }
    else if(op == 2){
        cout << a-b;
    }
    else if(op == 3){
        cout << a*b;
    }
    else if(op == 4){
        cout << a/b;
    }
return 0;
}
