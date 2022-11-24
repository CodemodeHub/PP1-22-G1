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
    unordered_map<string,string > m;
    unordered_map<string,string > :: iterator it;

    getline(cin,n);
    long long k = stoll(n);

    while(k--){
        string s;
        getline(cin,s);
        string country = getCountry(s);
        m[country] = s.substr(country.size() + 1);
        
    }

    long long x;
    cin >> x;
    while(x--){
        string g;
        cin >> g;
        for(it = m.begin(); it != m.end(); it++){
            if(it->second.find(g) != string::npos){
                cout << it->first << endl;
                break;
            }
            
        }
    }


    

    return 0;
}