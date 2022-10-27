#include <iostream>

using namespace std;
char arr[4][4];

bool isEqual(int i, int j){
    int n = 4;
    int sum = arr[i][j] + arr[i+1][j] + arr[i][j+1] + arr[i+1][j+1];
    if(sum == 'W'*4 || sum == 'B'*4){
        return true;
    }else{
        return false;
    }

}


int main(){
    int n = 4;

    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            cin >> arr[i][j];
        }
    }

    for(int i = 0; i < n - 1; i++){
        for(int j = 0; j < n - 1; j++){
            if(isEqual(i, j)){
                cout << "No\n";
                return 0;
            }
        }
    }

    cout << "Yes\n";

    return 0;
}