#include <bits/stdc++.h>

using namespace std;

string getCountry(string s){
    string t = "";
    for(size_t i = 0; i < s.size(); i++){
        if(s[i] == ' '){
            break;
        }else{
            t += s[i];
        }
    }
    return t;
}

int main(){
    // int n;
    // cin >> n; вместо этого:
    string n;
    unordered_map<string,vector<string> > m;
    unordered_map<string,vector<string> > :: iterator it;

    getline(cin,n);
    int k = stoi(n);

    while(k--){
        string s;
        getline(cin,s);
        string country = getCountry(s);
        m[country] = {};

        string temp = "";
        
        for(size_t i = country.size() + 1; i < s.size(); i++){
            if(s[i] == ' '){
                m[country].push_back(temp);
                temp = "";
            }else if(i == s.size() - 1){
                temp += s[i];
                m[country].push_back(temp);
            }else{
                temp += s[i];
            }
        }
        
    }


    int x;
    cin >> x;
    while(x--){
        string g;
        cin >> g;
        for(it = m.begin(); it != m.end(); it++){
            if(find(it->second.begin(), it->second.end(), g) != it->second.end()){
                cout << it->first << endl;
                break;
            }
        }

    }

    return 0;
}