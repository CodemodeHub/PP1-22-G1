#include <iostream>

using namespace std;

int main(){
    int a, b, c, d;
    cin >> a >> b >> c >> d;

    int k = a * 100 + b;
    int r = c * 100 + d;

    cout << (r - k) / 100 << " " << (r-k) % 100 << endl;

    return 0;
}