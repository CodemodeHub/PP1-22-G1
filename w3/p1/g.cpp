#include <iostream>

using namespace std;

int main(){
    int n, a, b;
    cin >> n >> a >> b;

    if(a >= n){
        cout << 1;
        return 0;
    }
    if(b >= a){
        cout << "NO" << endl;
        return 0;
    }

    int i = 0, h = 0;
    while(h < n){
        i++;
        h += a;
        if(h >= n){
            cout << i << endl;
            return 0;
        }
        h -= b;
    }
    cout << i << endl;
    


    return 0;
}