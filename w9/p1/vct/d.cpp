#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

// sort vector
// reverse vector
// find in vector

int main(){
    int n;
    cin >> n;

    vector<vector<int> > v;

    vector<int> temp;
    for(int i = 0; i < n; i++){
        int m;
        cin >> m;
        for(int j = 0; j < m; j++){
            int x;
            cin >> x;
            temp.push_back(x);
        }
        v.push_back(temp);
        temp.clear();
    }



    for(int i = 0; i < n; i++){
        for(int j = 0; j < v[i].size(); j++){
            cout << v[i][j] << " ";
        }
        cout << endl;
    }
    
    return 0;
}