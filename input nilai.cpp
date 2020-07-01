#include <iostream>

using namespace std;

int main(){
    int a;
    cout << "Masukan Nilai Anda : ";cin>>a;
    if(a>90){
        cout << "Nilai Anda A";
    }
    else if(a>70){
        cout << "Nilai Anda B";
    }
    else if(a>50){
        cout << "Nilai Anda C";
    }
    else if(a>30){
        cout << "Nilai Anda D";
    }
    else if(a>0){
        cout << "Nilai Anda E";
    }
    return 0;

}
