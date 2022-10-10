#include <iostream>
#include <limits.h>

using namespace std;

int main(){
    int n;
    cin >> n;

    int maxx = INT_MIN; // -1e6
    int minn = INT_MAX; // 1e6

    for(int i = 0; i < n; i++){
        int x;
        cin >> x;
        if(x > maxx){
            maxx = x;
        }
        if(x < minn){
            minn = x;
        }
    }

    cout << maxx - minn << endl;

    return 0;
}