#include <iostream>

using namespace std;

int getHeights(int arr[], int l, int r, int n){
    int mx = arr[l];
    int cnt = 1;
    for(int i = l + 1; i <= r; i++){
        if(arr[i] > mx){
            cnt++;
            mx = arr[i];
        }
    }
    return cnt;
}

int main(){
    freopen("output.txt", "w", stdout);
    int n;
    cin >> n;

    int arr[n];

    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }

    int q;
    cin >> q;

    int l, r;

    for(int i = 0; i < q; i++){
        cin >> l >> r;
        int cnt = getHeights(arr, l, r, n);
        cout << cnt << endl;
    }


    return 0;
}