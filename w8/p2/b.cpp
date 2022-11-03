#include <iostream>

using namespace std;

bool isValid(string s, int n){
    int cnt = 0;
    for(int i = 0; i < s.size(); i++){
        if(isdigit(s[i])){
            cnt++;
        }else if(!isdigit(s[i])){
            cnt = 0;
        }

        if(cnt >= n){
            return true;
        }
        
    }
    return false;
}

int main(){
    string s;
    int n;
    cin >> s >> n;

    if(isValid(s, n)){
        cout << "Valid\n";
    }else{
        cout << "Not Valid\n";
    }

    // cout << isValid(s, n) ? "Valid" : "Not Valid";

    return 0;
}