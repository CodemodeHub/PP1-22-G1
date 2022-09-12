#include <iostream>

using namespace std;


int main(){
    int n, k;    

    cin >> n >> k;

    int first = k / 100;
    int third = k % 10;

    int m = first + third;
    int answer = n + m;
    cout << answer << endl;

    // cout << n + k / 100 + k % 10 << endl;

    return 0;
}