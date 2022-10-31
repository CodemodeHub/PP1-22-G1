#include <iostream>

using namespace std;

bool can(int x, int n){
    if(x > n) return false;
    if(x == n) return true;
    return (can(x + 3, n) || can(x + 5, n));
}

int main(){
    int n;
    cin >> n;

    if(can(1, n)){
        cout << "YES";
    }else{
        cout << "NO";
    }

    return 0;
}