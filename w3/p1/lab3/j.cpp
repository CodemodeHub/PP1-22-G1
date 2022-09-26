#include <iostream>

using namespace std;

int main(){
    int n, target;

    cin >> n >> target;

    int a[n];

    for(int i = 0; i <n; i++){
        cin >> a[i];
    }

    for(int i = 0; i < n; i++){
        if(a[i] == target){
            cout << i+1 << endl;
            return 0;
        }else if(a[i] > target){
            cout << i << endl;
            return 0;
        }
    }
    cout << n << endl;

    return 0;
}