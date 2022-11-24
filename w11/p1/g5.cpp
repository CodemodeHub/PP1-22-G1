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
        string temp = "";


        for(size_t i = country.size() + 1; i < s.size(); i++){
            if(s[i] == ' '){
                m[temp] = country;
                temp = "";
            }else if(i == s.size() - 1){
                temp += s[i];
                m[temp] = country;
            }else{
                temp += s[i];
            }
        }
        
    }

    long long x;
    cin >> x;
    while(x--){
        string g;
        cin >> g;
        cout << m[g] << endl;
        
    }


    

    return 0;
}