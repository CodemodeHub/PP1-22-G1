#include <bits/stdc++.h>

using namespace std;

int getSum(vector<int> v){
    int sum = 0;
    for(int i = 0; i < v.size(); i++){
        sum += v[i];
    }
    return sum;
}


bool myComp(vector<int> &v1, vector<int> &v2){
    if(getSum(v1) == getSum(v2)){
        return v1.size() < v2.size();
    }
    return getSum(v1) < getSum(v2);
}


int main(){

    int n; cin >> n;

    vector<vector<int> > v;

    for(int i = 0; i < n; i++){
        int m;
        cin >> m;
        vector<int> temp;
        for(int j = 0; j < m; j++){
            int x;
            cin >> x;
            temp.push_back(x);
        }
        v.push_back(temp);
    }

    sort(v.begin(), v.end(), myComp);

    for(int i = 0; i < v.size(); i++){
        for(int j = 0; j < v[i].size(); j++){
            cout << v[i][j] << " ";
        }
        cout << endl;
    }
    

    return 0;
}