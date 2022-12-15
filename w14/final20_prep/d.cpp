#include <bits/stdc++.h>

using namespace std;

bool myComp(pair<pair<string, string>, double > &a, pair<pair<string, string>, double > &b){
    if(a.second == b.second){
        if(a.first.first == b.first.first){
            return a.first.second < b.first.second;
        }
        return a.first.first < b.first.first;
    }
    return a.second < b.second;
}

double toScore(string mark, int credit){
    if(mark == "A+") return credit * 4.00;
    if(mark == "A") return credit * 3.75;
    if(mark == "B+") return credit * 3.50;
    if(mark == "B") return credit * 3.00;
    if(mark == "C+") return credit * 2.50;
    if(mark == "C") return credit * 2.00;
    if(mark == "D+") return credit * 1.50;
    if(mark == "D") return credit * 1.00;
    if(mark == "F") return 0.0;
    return 1.0;

}

int main(){
    int n;
    cin >> n;

    vector<pair<pair<string, string>, double > > v;

    while(n--){
        string firstName;
        string secondName;
        int t;
        cin  >> secondName >> firstName >> t;
        double score = 0;
        int allcredits = 0;
        while(t--){
            string mark;
            int credit;
            cin >> mark >> credit;
            score += toScore(mark, credit);
            allcredits += credit;
        }
        double res = score / (double)allcredits;
        v.push_back({{secondName, firstName}, res});
    }   

    sort(v.begin(), v.end(), myComp);

    for(int i = 0; i < v.size(); i++){
        printf("%s %s %.3f\n", v[i].first.first.c_str(), v[i].first.second.c_str(), v[i].second);
    }

    return 0;
}