#include <iostream>
#include <vector>
// q2019 V2, problem H

using namespace std;

void my_swap(vector<vector<int> > &v, int j){
    vector<int> t = v[j+1];
    v[j+1] = v[j];
    v[j] = t;
}

int main(){
    int n;
    cin >> n;

    vector<vector<int> > v;

    for(int i = 0; i < n; i++){
        vector<int> t;
        for(int j = 0; j < 3; j++){
            int x;
            cin >> x;
            t.push_back(x);
        }
        v.push_back(t);
    }
    // THIS IS BUBBLE SORT
    for(int i = 0; i < n - 1; i++){
        for(int j = 0; j < n - i - 1; j++){
            if(v[j+1][0] < v[j][0]){
                my_swap(v, j);
            }else if(v[j+1][0] == v[j][0] ){
                if(v[j+1][1] < v[j][1]){
                    my_swap(v, j);
                }else if(v[j+1][1] == v[j][1]){
                    if(v[j+1][2] < v[j][2]){
                        my_swap(v, j);
                    }
                }
            }

        }
    }

    for(int i = 0; i < n; i++){
        for(int j = 0; j < 3; j++){
            cout << v[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}