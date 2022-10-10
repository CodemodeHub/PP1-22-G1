#include <iostream>

using namespace std;

int main(){
    int n;
    cin >> n;
    int ar[n][n];
    for( int i = 0; i < n; i++){
        ar[0][i] = i;
    }
    for( int i = 0; i < n; i++){
        ar[i][0] = i;
    }
    // finish code
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            cout<< ar[i][j]<<" ";
        }
        cout<<endl;
    }

    return 0;
}