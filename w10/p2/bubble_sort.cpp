#include <iostream>
#include <vector>

using namespace std;

void my_swap(vector<int> &v, int j){
    int t = v[j+1];
    v[j+1] = v[j];
    v[j] = t;
}

int main(){

    vector<int> v = {1, 5, 2, 7, 3, 9};

    for(int i = 0; i < v.size() - 1; i++){
        for(int j = 0; j < v.size() - i - 1; j++){
            if(v[j+1] < v[j]){
                my_swap(v, j);
            }
        }
    }

    for(int i = 0; i < v.size(); i++){
        cout << v[i] << " ";
    }

    return 0;
}