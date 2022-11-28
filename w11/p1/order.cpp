#include <bits/stdc++.h>

using namespace std;


int main(){
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);


    map<string, int> m;
    
    string s;
    while(cin >> s){
        if(m.find(s) == m.end()){
            cout << 0 << " ";
        }else{
            cout << m[s] << " ";
        }
        m[s]++;
    }
    

    return 0;
}