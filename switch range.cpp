#include <iostream>
using namespace std;

int main(){
string nama, k;
int n;

cout << "Input your name : ";getline(cin,nama);
cout << "Input your point: ";cin>>n;

switch(n)
{
case 0 :
    k = "Your face is bad";
    break;
case 1 ... 3:
    k = "Very bad";
    break;
case 4 ... 5:
    k = "bad";
    break;
case 6 ... 8:
    k = "Not bad guys";
    break;
case 9 ... 10:
    k = "Your point is fantastic";
    break;
default :
    k = "empty";
    break;
}
cout << "Yout name is "<<nama<<" point: "<<k<<endl;
return 0;
}
