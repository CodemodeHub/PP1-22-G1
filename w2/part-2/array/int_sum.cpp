#include <iostream>

using namespace std;

int main(){
    int n;
    cin >> n;

    float arr[n];

    float sum = 0;
    
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }

    for(int i = 0; i < n; i++){
        sum += arr[i];
    }
    cout << sum << endl;

    return 0;
}