#include <bits/stdc++.h>

using namespace std;

int main(){
    vector<int> v = {1,2,2,1};
    // do{
    //     cout << v[0] << " " << v[1] << " " << v[2] << endl;
    // }while(next_permutation(v.begin(), v.begin() + 3));
    while(next_permutation(v.begin(), v.end())){
        for(int i = 0; i < v.size(); i++){
            cout << v[i] << " ";
        }
        cout << endl;
    }
    return 0;
}