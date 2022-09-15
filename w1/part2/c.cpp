#include <iostream>
#include <cmath>

using namespace std;

int main(){
    int n;
    cin >> n;

    int a = n % 2;
    n = n / 2;

    int b = n % 2;
    n /= 2;

    int c = n % 2;
    n /= 2;

    int d = n % 2;

    // abcd

    cout << pow(2, 3) * a + pow(2, 2) * b + pow(2, 1) * c + pow(2, 0) * d << endl;


    return 0;
}