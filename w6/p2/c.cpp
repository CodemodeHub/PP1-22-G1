#include <iostream>

using namespace std;

int main(){
    int n;
    cin >> n;

    int a[n];

    for(int i = 0; i < n; i++){ // read array
        cin >> a[i];
    }

    int cnt[1001];

    for(int i = 0; i < 1001; i++){ // fill array of counters with 0
        cnt[i] = 0;
    }

    for(int i = 0; i < n; i++){ // count numbers
        cnt[a[i]]++;
    }

    int mx = INT_MIN;
    for(int i = 0; i < 1001; i++){
        if(cnt[i] > mx){
            mx = cnt[i];
        }
    }

    for(int i = 1000; i >= 0; i--){
        if(cnt[i] == mx){
            cout << i << " ";
        }
    }

    

    return 0;
}