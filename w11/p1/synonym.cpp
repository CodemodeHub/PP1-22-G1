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
    
    // получить ключ по значению

    for(it = m.begin(); it != m.end(); it++){
        if(s == (*it).second){
            cout << (*it).first << endl;
            break;
        }else if(s == (*it).first){
            cout << (*it).second << endl;
            break;
        }
    }

    
    
    return 0;
}