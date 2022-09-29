#include <iostream>

using namespace std;

int main(){
    int n;
    cin >> n;

    if(n == 1){
        cout << "No" << endl;
        return 0;
    }

    for(int i = 2; i < n / 2 + 1; i++){
        if(n % i == 0){
            cout << "No\n";
            return 0;
        }
    }

    cout << "Yes" << endl;
    return 0;
}