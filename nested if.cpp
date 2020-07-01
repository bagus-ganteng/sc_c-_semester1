#include<iostream>
using namespace std;

int main(){
string nama;
char height, gender;
bool status;

cout << "Gender : \n1. Men \n2. Women"<< endl;
cout << "Nama               : ";getline(cin,nama);
cout << "Gender(L/P)        : ";cin >> gender;
cout << "Height             : ";cin >> height;

if(gender = "L"){
    if(height >= 180){
        status = true;
    }else{
    status = false;
    }
}else{
    status = false;
    }
if(gender = "P"){
    if(height >= 170){
        status = true;
    }else{
    status = false;
    }
}else{
    status = false;
    }
if(status == true){
    cout << "Congratulations you accepted";
}else{
    cout << "I'm so sorry :(";
    }

}
