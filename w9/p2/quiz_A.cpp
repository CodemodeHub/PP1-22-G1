#include <iostream>
#include<vector>
#include<cmath>
using namespace std;

int prime(int n){
    int cnt = 0;
    vector<int> v;
    v.push_back(2);
    int x = 2;
    while(cnt < n){
        bool res =true;
        for(int i = 2; i < sqrt(x) + 1; i++){
            if(x % i == 0){
                res = false;
            }
        }
        if(res == true){
            cnt ++;
            v.push_back(x);
        }
        x++;
    }
    return v[n - 1];
}

int main(){
    int n;
    cin >> n;
    cout << prime(n);
    return 0;
}