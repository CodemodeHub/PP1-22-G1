#include <iostream>
#include<algorithm>
#include<vector>
using namespace std;

int main(){
    vector<int> v = {1,2,3,4,55,6,7,342,63};
    rotate(v.begin() + 2,v.begin() + 5,v.end());
    for(int i = 0; i < v.size(); i++){
        cout << v[i] << " ";
    }
    return 0;
}