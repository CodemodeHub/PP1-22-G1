#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    int n, a, b, c, d;

    cin >> n >> a >> b >> c >> d;

    vector<int> v;

    for(int i = 1; i <= n; i++){
        v.push_back(i);
    }

    reverse(v.begin() + a - 1, v.begin() + b);

    reverse(v.begin() + c - 1, v.begin() + d);

    for(int i = 0; i < v.size(); i++){
        cout << v[i] << " ";
    }

    return 0;
}