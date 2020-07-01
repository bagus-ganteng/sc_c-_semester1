#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    int a, b;
    cout << "Input angka pertama    : ";cin>>a;
    cout << "Input angka kedua      : ";cin>>b;
    cout << "" <<endl<<endl;
    cout << "= = = Hasil Perhitungan = = ="<<endl<<endl;

    cout << a << "+" << b << "=" << a+b << endl;
    cout << a << "-" << b << "=" << a-b << endl;
    cout << a << "*" << b << "=" << a*b << endl;
    cout << a << "/" << b << "=" << setprecision(3) << (float)a/b << endl;
    cout << a << "%" << b << "=" << a%b << endl;
        return 0;
}
