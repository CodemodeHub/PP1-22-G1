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

    vector<int> v;

    for(int i = 0; i < n; i++){
        // cin >> v[i] // WRONG
        int x;
        cin >> x;
        v.push_back(x);
    }

    sort(v.begin(), v.end() );

    reverse(v.begin(), v.end());

    for(int i = 0; i < n; i++){
        cout << v[i] << " ";
    }
    return 0;
}