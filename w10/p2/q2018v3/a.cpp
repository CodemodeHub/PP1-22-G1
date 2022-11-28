#include <iostream>
#include <vector>

using namespace std;

void my_swap(vector<int> &v, int j, int i){
    int t = v[j];
    v[j] = v[i];
    v[i] = t;
}

int main(){
    vector<int> v;

    while(1){
        int x;
        cin >> x;
        if(x == 0) break;
        v.push_back(x);
    }

    for(int i = 0; i < v.size() - 1; i++){
        for(int j = i+1; j < v.size(); j++){
            if(v[j] < v[i]){
                my_swap(v, j, i);
            }
        }
    }

    for(int i = 0; i < v.size(); i++){
        cout << v[i] << ' ';
    }


    return 0;
}