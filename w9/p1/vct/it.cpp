#include <iostream>
#include<vector>
#include<iterator>
using namespace std;

int main(){
    int n;
    cin >> n;
    vector<int> v;
    vector<int> :: iterator it;
    for(int i = 0; i < n; i++){
        int x;
        cin >> x;
        v.push_back(x);
    }
    for(int i = 0; i < v.size(); i++){
        cout << v[i] << " ";
    }
    cout << endl;
    for(it = v.begin(); it != v.end(); it++){
        cout << &it << " ";
    }

    return 0;
}