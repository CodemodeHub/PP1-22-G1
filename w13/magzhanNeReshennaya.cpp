#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin >> n;
    vector<int> magzhan1, magzhan2;
    for(int i = 0; i < n; i++){
        int x;
        cin >> x;
        magzhan1.push_back(x);
    }
    int m;
    cin >> m;
    for(int i = 0; i < m; i++){
        int x;
        cin >> x;
        magzhan2.push_back(x);
    }
    for(int i = 0; i < magzhan1.size(); i++){
        for(int j = i + 1; j < magzhan1.size(); j++){
            int y = magzhan1[i] + magzhan1[j];
            if(find(magzhan2.begin(), magzhan2.end(), y) != magzhan2.end()){
                cout << "YES" << endl;
            }else{
                cout << "NOO" << endl;
            }
        }
    }
    return 0;
}