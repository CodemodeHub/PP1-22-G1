#include <bits/stdc++.h>

bool is_upper(char c){
    if(c >= 65 && c <= 90){
        return true;
    }else{
        return false;
    }
    //return false;
}
//isUpper
//is_upper
using namespace std;

int main(){
    char c;
    cin >> c;    
    if(is_upper(c) == true){
        cout << "YES";
    }else{
        cout << "NO";
    }
    return 0;
}