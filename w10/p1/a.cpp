#include <iostream>

using namespace std;
char arr[100][100];

int scanner(int n, int x, int y, int cnt){
    if(x < 0 || x >= n) return cnt;
    if(arr[y-1][x-1] == '*'){
        return 
    }

}



int main(){
    int n;
    cin >> n;

    int x, y;

    cin >> x >> y;


    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            cin >> arr[i][j];
        }
    }

    int res = scanner(n, x, y, 1);
    return 0;
}