#include <iostream>

using namespace std;

long long fac(int n){
    if(n <= 1){
        return 1;
    }else{
        return n * fac(n-1);
    }
}

int nFactorial(int i, int n){
    if(i >= n) return i;
    return i * nFactorial(i + 1,n);
}

int main(){
    int n;
    cin >> n;

    cout << nFactorial(1, n);

    return 0;
}