#include <iostream>
#include <cstdlib>
#include <windows.h>
#include <conio.h>

using namespace std;

int main(){

system("color a");
float a,b;
int kode;
char z;

    menu :
        cout << "\nMENU :"<<endl;
        cout << "1. Penjumlahan (+)"<<endl;
        cout << "2. Pengurangan (-)"<<endl;
        cout << "3. Perkalian (x)"<<endl;
        cout << "4. Pembagian (/)"<<endl<<endl;
        cout << "Pilih Menu :   ";
        cin >> kode;
        if (kode > 4 || kode < 1){
            cout<< "Menu tidak tersedia \nUlangi lagi ... \n";
            system("pause");
            system("cls");
            goto menu;
        }
    else {
    cout << "Masukan angka pertama  :   ";
    cin >> a;
    cout << "Masukan angka kedua    :   ";
    cin >> b;
    if (kode == 1){
        cout << "\nHasil penjumlahan dari "<<a<<" + "<<b<<" adalah : "<<a+b<<endl;
    }
    else if (kode == 2){
        cout << "\nHasil pengurangan dari "<<a<<" - "<<b<<" adalah : "<<a-b<<endl;
    }
    else if (kode == 3){
        cout << "\nHasil perkalian dari "<<a<<" * "<<b<<" adalah : "<<a*b<<endl;
    }
    else if (kode == 4){
        cout << "\nHasil pembagian dari "<<a<<" / "<<b<<" adalah : "<<a/b<<endl;
    }

    }
    selesai :
        cout << "Ingin menggunakan lagi ? (Y/N)\n";
        cin >> z;
        if (z == 'y' || z == 'Y'){
            goto menu;
        }
        if (z == 'N' || z == 'n'){
            exit(0);
        }
    goto selesai;

getch();
}




