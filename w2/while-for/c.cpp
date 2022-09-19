#include <iostream>

using namespace std;

int main(){
    int n;
    cin >> n;

    for(int i = 1; i <= n; i++){
        cout << i << " ";
    }
    cout << endl;
    for(int i = n; i > 0; i--){
        cout << i << " ";
    }

    cout << endl;
    for(int i = 0; i < n; i += 2){
        cout << i << " ";
    }


    return 0;
}