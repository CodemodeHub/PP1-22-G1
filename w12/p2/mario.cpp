#include <bits/stdc++.h>

using namespace std;
int a[1001][1001];

int main(){
    int n, m;
    cin >> n >> m;
    int numMush = 0;
    queue<pair<int,int>> mario;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            cin >> a[i][j];
            if(a[i][j] == 1){
                numMush++;
            }else if(a[i][j] == 2){
                mario.push({i,j});
            }
        }
    }
    int time = 0;
    while(!mario.empty()){
        int size = mario.size();
        if(numMush == 0) break;
        while(size--){
            int i = mario.front().first;
            int j = mario.front().second;
            mario.pop();
            if(i > 0 && a[i - 1][j] == 1){
                a[i - 1][j] = 2;
                mario.push({i - 1, j});
                numMush--;
            }
            if(a[i + 1][j] == 1){
                a[i + 1][j] = 2;
                mario.push({i + 1, j});
                numMush--;
            }
            if(j > 0 && a[i][j - 1] == 1){
                a[i][j - 1] = 2;
                mario.push({i, j - 1});
                numMush--;
            }
            if(a[i][j + 1] == 1){
                a[i][j + 1] = 2;
                mario.push({i, j + 1});
                numMush--;
            }
        }
        time++;
    }
    if( numMush != 0) cout << -1;
    else cout << time;
    return 0;
}