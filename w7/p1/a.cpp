#include <iostream>

using namespace std;

int main(){
    int n = 5;
    string arr[n] = {"abcAGYSDB", "bhbTEFBC", "jdfjURFFNhdbb", "YaslanRUCHanov", "DiJiKie"};

    for(int i = 0; i < n; ++i){
        int cnt = 0;
        for(size_t j = 0; j < arr[i].size(); j++){
            if(arr[i][j] >= 97 && arr[i][j] <= 122){
                cnt++;
            }
        }
        cout << arr[i] << ": " << cnt << endl;
    }

    return 0;
}