#include <iostream>

using namespace std;

// тоже не заходит))

int getPos(int x, int b[], int n){
    for(int i = 0; i < n; i++){
        if(b[i] == x){
            return i;
        }
    }
    return -1;
}

int main(){
    int n;

    cin >> n;

    int a[n];
    int b[n];

    for(int i = 0; i < n; i++){
        cin >> a[i];
    }

    for(int i = 0; i < n; i++){
        cin >> b[i];
    }


    int cnt = 0;

    for(int i = 0; i < n; i++){
        int pos = getPos(a[i], b, n);
        if(pos != -1){ // if we found element
            cnt++;
            b[pos] = -1;
        }
    }


    cout << cnt << endl;
    return 0;
}