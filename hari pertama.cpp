//MENGHITUNG LIMIT SUATU VARIABEL

#include <iostream>
#include <climits>

using namespace std;

int main(){
    char a;
    int b;

    cout << "Tipe data char : "<<endl;
    cout << "Nilai Maksimum : "<< CHAR_MAX << endl;
    cout << "Nilai Minimum  : "<< CHAR_MIN << endl;
    cout << "Ukuran         : "<< (int) sizeof(a) << " byte"<<endl<<endl;

    cout << "Tipe data interger : "<<endl;
    cout << "Nilai Maksimum : "<< INT_MAX << endl;
    cout << "Nilai Minimum  : "<< INT_MIN << endl;
    cout << "Ukuran         : "<< (int) sizeof(b) << " byte"<<endl;


    return 0;

}
