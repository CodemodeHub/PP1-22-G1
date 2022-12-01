#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin >> n;

    map<string, int> m;
    while(n--){
        string s;
        cin >> s;
        m[s]++; 
        if(m[s] == 1){
            cout << "new user added" << endl;
        }else{
            cout << "user already exists" << endl;
        }
    }

    return 0;
}