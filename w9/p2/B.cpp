#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    set<string> v;
    vector<string> newv;
    string s;
    
    for(int i=0;i<n;i++){
        cin >> s;
        if(v.find(s)==v.end()){
            v.insert(s);
        }
        else{
            newv.push_back(s);
            v.erase(s);
        }
    }
    if(!newv.empty()){
        for(int i=0;i<newv.size(); i++){
            cout << newv[i] << endl;
        }
    }else cout << "Understandable, have a great day";
    
    return 0;
}