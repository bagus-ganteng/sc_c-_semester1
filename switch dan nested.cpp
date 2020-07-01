#include <iostream>

using namespace std;

int main(){

int a;

cout << "Input your point :"; cin >> a;

switch (a) {

case 9 ... 10:
    cout << "Your point is fantastic";
    break;
case 6 ... 8:
    cout << "Not bad guys";
    break;
case 4 ... 5:
    cout << "Bad";
    break;
case 1 ... 3:
    cout << "Very bad";
    break;
case 0:
    cout << "Your face is bad";
    break;
default:
    cout << "ERROR";
    break;
}

return 0;
}
