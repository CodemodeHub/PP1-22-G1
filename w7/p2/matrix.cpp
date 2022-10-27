#include <iostream>

using namespace std;
int a[1000][1000];

bool mirror(int n){
    for(int i = 0; i < n; i++){
        for( int j = 0; j < n; j++){
            if(a[i][j] != a[j][i]){
                return false;
            }
        }
    }
    return true;
}

int main(){
    int n;
    cin >> n;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            cin >> a[i][j];
        }
    }
    if(mirror(n) == true){
        cout << "yes";
    }else{
        cout << "no";
    }
    return 0;
}