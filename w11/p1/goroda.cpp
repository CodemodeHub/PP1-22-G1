#include <bits/stdc++.h>

using namespace std;

int main(){
    // int n;
    // cin >> n; вместо этого:
    string n;
    map<string,vector<string>> m;
    map<string,vector<string>> :: iterator it;

    getline(cin,n);
    int k = stoi(n);

    while(k--){
        string s;
        getline(cin,s);
        string temp = "";
        bool country = 0;
        string strana = "";
        
        for(size_t j = 0; j < s.size(); j++){
            if(s[j] == ' ' &&  country == false){
                m[temp] = {}; // vector<int> v = {1,2,3}
                strana = temp;
                temp = "";
                country = true;
                // cout << "strana is " << strana << endl;
            }else if(s[j] == ' ' &&  country == true){
                m[strana].push_back(temp);
                temp = "";
            }else if(j == s.size() - 1 && country == true){
                temp += s[j];
                m[strana].push_back(temp);
            }else{
                temp += s[j];
            }
        }
    }


    int x;
    cin >> x;
    while(x--){
        string g;
        cin >> g;
         for(it = m.begin(); it != m.end(); it++){
            for(int i = 0; i < (*it).second.size(); i++){
                if((*it).second[i] == g){
                    cout << (*it).first << endl;
                    break;
                }
            }
        }

    }

    return 0;
}