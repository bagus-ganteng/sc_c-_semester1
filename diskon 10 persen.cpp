#include <iostream>
using namespace std;

int main(){
float total, diskon, bayar;

cout << "Masukan total belanja : "; cin >> total;

if (total > 100000){
    diskon = total*0.1;
}
else {
    diskon = 0;
}
    bayar = total-diskon;
    cout << "Total Belanja : "<< total<< endl;
    cout << "Total diskon  : "<< diskon<< endl;
    cout << "Yang harus dibayar :"<<" Rp "<<bayar<< endl;
return 0;
}
