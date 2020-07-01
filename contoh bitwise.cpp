#include <iostream>
using namespace std;
int main(){
    int a = 0b1000;

    cout << a << endl;
    cout << (a << 1) << endl;
    cout << (a << 2) << endl;
    cout << (a >> 1) << endl;
    cout << (a >> 2) << endl;

    return 0;
}
