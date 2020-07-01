#include <iostream>

using namespace std;
int main (){
int n;

cout << "Masukan input angka : "; cin >> n;

int sum=0;
for (int i=n; i>=1`; i--){
        sum += i;
    cout << i << "+";
}
    cout << "\nMaka jumlahnya "<< " adalah " << sum ;
return 0;
}
