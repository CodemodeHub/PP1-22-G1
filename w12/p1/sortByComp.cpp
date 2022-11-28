#include <bits/stdc++.h>

using namespace std;
bool my_comp(pair<string,pair<int, int>>& a, pair<string,pair<int, int>>& b){
    if(a.second.first == b.second.first){
        return a.second.second < b.second.second;
    }else{
        return a.second.first < b.second.first;
        // if(a.second.first < b.second.first){
        //     return false;
        // }else{
        //     return true;
        // }
    }
}

int main(){
    int n;
    cin >> n;
    vector<pair<string,pair<int,int>>> v;
    for(int i = 0; i < n; i++){
        string s;
        int x, y;
        cin >> s >> x >> y;
        pair<int,int> a = make_pair(x,y);
        v.push_back(make_pair(s,a));
    }
    sort(v.begin(), v.end(), my_comp);
    // pair<int, int> a = {12,11};
    // pair<int, int> a = {10,11};
    // my_comp(a,b);
    for(int i = 0; i < v.size(); i++){
        cout << v[i].first << " " << v[i].second.first << " " << v[i].second.second << endl;
    }
    return 0;
}