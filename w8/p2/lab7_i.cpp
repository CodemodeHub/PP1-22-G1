#include <iostream>

using namespace std;
int infinite(){
    int x;
    cin >> x;
    if(x == 0) return 0;
    return infinite() + x;
}

int main(){
    cout << infinite();
    return 0;
}