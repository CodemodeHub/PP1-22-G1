#include <iostream>

using namespace std;

int main(){
    char c;
    cin >> c;
    if(int(c) >= 48 && int(c) <= 57){
        cout<<"yes";
    }else{
        cout<<"no";
    }

    return 0;
}