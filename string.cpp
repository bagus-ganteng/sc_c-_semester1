#include <iostream>
//penggunaan string
using namespace std;

int main(){
    string s = "C++ dan Qt";
    for (size_t i=0; i < s.length(); i++){
        cout << s[i] << "";
    }
    return 0;
}
