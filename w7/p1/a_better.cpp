#include <iostream>

using namespace std;

int lowerCnt(string s){
    int cnt = 0;
    for(size_t i = 0; i < s.size(); i++){
        if(s[i] >= 97 && s[i] <= 122){
            cnt++;
        }
    }
    return cnt;
}

int main(){
    int n = 5;
    string arr[n] = {"abcAGYSDB", "bhbTEFBC", "jdfjURFFNhdbb", "YaslanRUCHanov", "DiJiKie"};

    for(int i = 0; i < n; i++){
        cout << arr[i] << ": " << lowerCnt(arr[i]) << endl;
    }

    return 0;
}