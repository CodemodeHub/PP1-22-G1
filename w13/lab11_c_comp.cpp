#include <bits/stdc++.h>

using namespace std;
bool mycomp(pair<string, double> &a, pair<string, double> &b){
    if(a.second == b.second){
        a.first > b.first;
    }
    return a.second > b.second;

}

int main(){
    int n;
    cin >> n;
    map<string, double> m;
    map<string, double> :: iterator it;
    double sum = 0;
    while(n--){
        string s;
        double d;
        cin >> s >> d;
        m[s] += d;
        sum += d;
    }
    vector<pair<string,double>> v;
    for(it = m.begin(); it != m.end(); it++){
        v.push_back({(*it).first, (*it).second * 100 / sum});
    }
    sort(v.begin(), v.end(), mycomp);
    for(int i = 0; i < v.size(); i++){
        cout << v[i].first << " " << v[i].second << "%" << endl;
    }
    return 0;
}