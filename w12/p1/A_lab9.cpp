#include <bits/stdc++.h>
// sort pair of ints
using namespace std;

bool comp(pair<int, int>& a,pair<int, int>& b){
    if(a.first == b.first){
        return a.second < b.second;
    }
    return a.first < b.first;
}

int main(){
    int n;
    cin >> n;
    vector<pair<int,int>> v;
    while(n--){
        int x, y;
        cin >> x >> y;
        v.push_back({x,y});
    }
    sort(v.begin(), v.end(), comp);
    for(auto i : v){
        cout << i.first << " " << i.second << endl;
    }
    return 0;
}