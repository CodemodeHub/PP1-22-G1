#include <bits/stdc++.h>

using namespace std;

int main(){
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    map<string, int> m;
    map<string, int> :: iterator it;

    string s;
    int x;

    while(cin >> s >> x){
        m[s] += x;
    }

    for(it = m.begin(); it != m.end(); it++){
        cout << it->first << " " << it->second << endl;
    }

    return 0;
}