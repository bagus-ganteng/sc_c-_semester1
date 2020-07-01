#include <iostream>

using namespace std;

int main (){
char a = 'y';

cout << "Apakah Bagus Ganteng? ";cin>>a;

while(a != 'y'){
    cout << "ERROR";
}
return 0;
}
