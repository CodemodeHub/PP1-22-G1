#include <iostream>

using namespace std;

int main(){
    int n;
    cin >> n;
    int arr[n][n];

    int cnt = 0;

    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            arr[i][j] = cnt;
            cnt++;
        }
    }

    for(int i = 0; i < n; i++){
        for(int j = 0; j <n; j++){
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }



    return 0;
}