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
    string n;
    getline(cin,n);
    int k = stoi(n);

    vector<string> v; 

    for(int i = 0; i < k; i++){
        string t;
        getline(cin, t);
        v.push_back(t);
    }

    int x;
    cin >> x;

    for(int i = 0; i < x; i++){
        string g;
        cin >> g;

        for(int i = 0; i < v.size(); i++){
            if(v[i].find(g) != string::npos){
                cout << getCountry(v[i]) << endl;
            }
        }
    }


    return 0;
}