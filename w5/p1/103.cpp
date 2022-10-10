#include <iostream>

using namespace std;

int main(){
    char c;
    if(int(c) >= 97 && int(c) < 123){
        cout << char(int(c) - 32);
    }else{
        cout << c;
    }

    return 0;
}