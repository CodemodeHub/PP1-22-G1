#include <iostream>

using namespace std;

int trib(int n){
    if(n == 0) return 0;
    if(n == 1) return 1;
    if(n == 2) return 1;
    return trib((n-3)%10)+trib((n-2)%10)+trib((n-1)%10);
}

int main(){
    int n;
    cin >> n;
    cout << trib(n);

    return 0;
}