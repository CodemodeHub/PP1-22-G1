#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    int n;
    cin >> n;

    vector<int> v((n+1) * n / 2);

    int j = 0;
    for(int i = 1; i <= n; i++){
        fill(v.begin() + j, v.begin() + i + j, i);
        j += i;
    }

    for(int i = 0; i < v.size(); i++){
        cout << v[i] << " ";
    }

    return 0;
}