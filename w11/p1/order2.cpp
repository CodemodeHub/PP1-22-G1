#include <bits/stdc++.h>

using namespace std;

string clearString(string s){
    string t = "";

    for(size_t i = 0; i < s.size(); i++){
        if(isalpha(s[i])){
            t += s[i];
        }
    }
    return t;
}

int main(){
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);


    map<string, int> m;
    
    string s;
    while(cin >> s){
        s = clearString(s);
        if(m.find(s) == m.end()){
            cout << 0 << " ";
        }else{
            cout << m[s] << " ";
        }
        m[s]++;
    }
    

    return 0;
}