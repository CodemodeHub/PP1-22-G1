#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;
    vector<int> v;

    while(next_permutation(v.begin() + 1, v.end())){
        cout << v[0] << " " << v[1] << " " << v[2] << endl;
    }
    return 0;
}