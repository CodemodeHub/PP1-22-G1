#include <iostream>

using namespace std;

int main(){
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    int n;
    cin >> n;
    int arr[n][n];

    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            cin >> arr[i][j];
        }
    }

    int maxx = INT_MIN;
    int second = INT_MIN;
    
    

    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            if(arr[i][j] > maxx){
                maxx = arr[i][j];
            }
        }
    }

    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            if(arr[i][j] > second && arr[i][j] < maxx){
                second = arr[i][j];
            }

        }
    }
    if(second == INT_MIN){
        cout << 0 << endl;
    }else{
        cout << second << endl;

    }

    return 0;
}