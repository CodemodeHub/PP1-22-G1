#include <iostream>

using namespace std;

int main(){
    int n;
    cin >> n;

    // long arr[n];
    int arr[n];
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }

    for(int i = 0; i < n; i++){
        cout << arr[i] << endl;
    }

    return 0;
}