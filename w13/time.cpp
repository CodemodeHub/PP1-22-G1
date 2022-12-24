#include <bits/stdc++.h>

using namespace std;
bool asc(pair<pair<int,int>,int> &a,pair<pair<int,int>,int> &b){
    if(a.first.first == b.first.first){
        if(a.first.second == b.first.second){
            return a.second < b.second;
        }
        return a.first.second < b.first.second;
    }
    return a.first.first < b.first.first;
}
bool desc(pair<pair<int,int>,int> &a,pair<pair<int,int>,int> &b){
    if(a.first.first == b.first.first){
        if(a.first.second == b.first.second){
            return a.second > b.second;
        }
        return a.first.second > b.first.second;
    }
    return a.first.first > b.first.first;
}

int main(){
    int n;
    cin >> n;
    vector<pair<pair<int,int>,int>> v;
    while(n--){
        int h, m ,s;
        cin >> h >> m >> s;
        v.push_back({{h,m}, s});
    }
    string s;
    cin >> s;
    if(s == "asc"){
        sort(v.begin(), v.end(), asc);
    }else{
        sort(v.begin(), v.end(), desc);
    }
    for(int i = 0; i < v.size(); i++){
        cout << v[i].first.first << " " << v[i].first.second << " " << v[i].second << endl;
    }
    return 0;
}