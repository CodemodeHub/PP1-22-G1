#include <iostream>
#include <vector>

using namespace std;

void print(vector<int> v){
    for(int i = 0; i < v.size(); i++){
        cout << v[i] << " ";
    }

}

int main(){
    int n;
    cin >> n;

    vector<int> v;

    int x;
    for(int i = 0; i < n; i++){
        cin >> x;
        v.push_back(x);
    }

    print(v);

    return 0;
}