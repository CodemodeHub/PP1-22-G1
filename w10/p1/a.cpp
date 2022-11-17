#include <iostream>

using namespace std;
char arr[10][10];
int cnt = 0;

void checkRooms(int n, int col, int row){
    arr[row][col] = '*';
    cnt++;

    if(row - 1 >= 0 && arr[row - 1][col] == '.'){
        checkRooms(n, col, row - 1);
    }
    if(row + 1 < n && arr[row + 1][col] == '.'){
        checkRooms(n, col, row + 1);
    }
    if(col - 1 >= 0 && arr[row][col - 1] == '.'){
        checkRooms(n, col - 1, row);
    }
    if(col + 1 < n && arr[row][col + 1] == '.'){
        checkRooms(n, col + 1, row);
    }

}

int main(){
    int n, x, y;
    cin >> n >> x >> y;

    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            cin >> arr[i][j];
        }
    }


    checkRooms(n, x - 1, y - 1);

    cout << cnt << endl;

    return 0;
}