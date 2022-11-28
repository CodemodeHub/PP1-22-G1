#include <iostream>

using namespace std;
void leftToRight(int n){
    if(n == 0) return;
    return leftToRight(n / 10);
    cout << n % 10 << " ";
    
}

int main(){
    int n;
    cin >> n;
    leftToRight(n);
    return 0;
}