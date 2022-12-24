#include <bits/stdc++.h>

using namespace std;
map<string, int> m;
bool kempyr(pair<string,int> &a, pair<string,int> &b){
    if(a.first == b.first){
        return a.second < b.second;
    }
    return m[a.first] < m[b.first];
}

int main(){
    m["red"] = 1;
    m["orange"] = 2;
    m["yellow"] = 3;
    m["green"] = 4;
    m["blue"] = 5;
    m["indigo"] = 6;
    m["purple"] = 7;
    int n;
    cin >> n;
    vector<pair<string, int>> v;
    while(n--){
        string s;
        int x;
        cin >> s >> x;
        v.push_back({s,x});
    }
    sort(v.begin(), v.end(), kempyr);
    for(int i = 0; i < v.size(); i++){
        cout << v[i].first << " " << v[i].second << endl; 
    }
    return 0;
}