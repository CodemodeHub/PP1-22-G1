#include <bits/stdc++.h>

using namespace std;

int main(){
    vector<int> v;
    while(true){
        int x;
        cin >> x;
        if(x == 0) break;
        v.push_back(x);
    }
    if(v.size() % 2 == 0){
        for(int i = 0; i < v.size()/2; i++){
            cout << v[i] + v[v.size() - i - 1] << " ";
        }
    }else{
        for(int i = 0; i < v.size()/2; i++){
            cout << v[i] + v[v.size() - i - 1] << " ";
        }
        cout << v[v.size()/2];
    }

    return 0;
}