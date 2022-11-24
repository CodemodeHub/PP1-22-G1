#include <iostream>
#include<map>
using namespace std;
int main(){
    map<string, string> m;
    map<string, string> :: iterator it;
    int n;
    cin >> n;
    for(int i = 0; i < n; i++){
        string s, s2;
        cin >> s >> s2;
        m[s] = s2;
    }
    string s;
    cin >> s;
    // search value by key
    if(m.find(s) == m.end()){
        cout << -1;
    }else{
        cout << m[s];
    }
    
    
    return 0;
}