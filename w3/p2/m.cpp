#include <iostream>

using namespace std;

int main(){
    int sum = 0;

    int x;
    while(cin >> x){
        sum += x;
    }

    cout << sum << endl;

    return 0;
}