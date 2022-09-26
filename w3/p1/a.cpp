#include <iostream>

using namespace std;

int main(){
    int n;
    cin >> n;

    int maxx = INT_MIN;
    int minn = INT_MAX;

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