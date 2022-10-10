#include <iostream>

using namespace std;

int main(){
    int n;
    cin >> n;
    int cnt[100001];
    fill(cnt, cnt + 100001, 0);

    int a[n];
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }


    for(int i = 0; i < n; i++){
        cnt[a[i]]++;
    }

    for(int i = 0; i < 100001; i++){
        if(cnt[i] >= 1){
            cout << i << " ";
        }
    }

    return 0;
}