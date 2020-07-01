#include <iostream>

using namespace std;

int main(){

/*
int n=1;
while (n<16){
    cout << "Ryan ke- "<<n<<endl;
    n++;
}

int n=1;
do{
    cout << "Ryan ke - "<<n<<endl;
    n++;
}while(n<16);



for (int n=1; n<16; n+=3){
    cout << "Ryan ke- "<<n<<endl;
}
*/

int barang, jumlah, harga, total=0, bayar, diskon;

cout << "Berapa banyak barang yang anda beli? "; cin >> barang; cout<< endl;

for (int i=1; i<=barang; i++){
    cout << "Harga barang ke-"<<i<<" :";cin >> harga;
    cout << "Jumlah barang ke-"<<i<<" :";cin >> jumlah;
    cout << endl;
    total += harga*jumlah;

}

if (total > 100000){
    diskon=total*0.1;
    bayar=total-diskon;
}else {
    bayar=total;}
cout << "Total yang harus di bayar : " <<bayar;
return 0;
}
