#include <iostream>
#include <vector>

using namespace std;

string toLower(string s){
    for(int i = 0; i < s.size(); i++){
        s[i] = tolower(s[i]);
    }
    return s;
}

bool isEqual(string s, string t){
    for(int i = 0; i < s.size(); i++){
        if((s[i] == 'p' && t[i] == 'b') || (s[i] == 'b' && t[i] == 'p')){
            continue;
        }else if((s[i] == 'i' && t[i] == 'e') || (s[i] == 'e' && t[i] == 'i')){
            continue;
        }else if(s[i] != t[i]){
            return false;
        }
    }
    return true;
}

int main(){
    int n;
    cin >> n;
    vector<string> v;

    for(int i = 0; i < n; i++){
        string s, t;
        cin >> s >> t;
        if(s.size() != t.size()){
            // cout << "No\n";
            v.push_back("No");
        }else{
            if(isEqual(toLower(s), toLower(t))){
                // cout << "Yes\n";
                v.push_back("Yes");
            }else{
                // cout << "No\n";
                v.push_back("No");
            }
        }
    }


    for(int i = 0; i < n; i++){
        cout << v[i] << endl;
    }

    return 0;
}