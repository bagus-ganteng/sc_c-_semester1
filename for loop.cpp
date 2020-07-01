#include<iostream>
using namespace std;

int main(){

cout << "Loop 1"<<endl;
for(int a = 1; a < 10; a++){
    cout << a << endl;
}

cout << "\n Loop 2"<<endl;
for(int a = 1; a < 10; a+=2){
    cout << a << endl;
}

cout << "\n Loop 3"<<endl;
for(int a = 1; a >= -10; a--){
    cout << a << endl;
}

int total =0;
cout << "\n Loop 4"<<endl;
for(int a = 1; a < 10; a++){
    total += a;
    cout << a << "||" << total << endl;
}

int to =0;
cout << "\n Loop 5"<<endl;
for(int a = 1; a < 10;    to += a, a++){
    cout << a << "||" << to << endl;
}
    return 0;
}
