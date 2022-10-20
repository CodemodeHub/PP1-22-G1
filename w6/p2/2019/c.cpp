#include <iostream>
#include <algorithm>

using namespace std;

int main(){
    int n;
    cin >> n;
    int a[n];

    for(int i = 0; i < n; i++){
        cin >> a[i];
        if(a[i] < a[i-1]){
            cout << "Not Interesting\n";
            return 0;
        }
    }

    cout << "Interesting\n";



    return 0;
}