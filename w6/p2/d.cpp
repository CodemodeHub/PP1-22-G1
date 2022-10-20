#include <iostream>

using namespace std;

bool isPalindrome(string s){
    for(int i = 0; i < s.size() / 2; i++){
        if(s[i] != s[s.size() - i - 1]){
            return false;
        }
    }
    return true;
}

int main(){
    string s;
    cin >> s;

    if(isPalindrome(s) == false){
        cout << s.size() << endl;
        return 0;
    }

    int x = s.size() - 1;

    for(int i = 0; i <= s.size() - x; i++){
        if(isPalindrome(s.substr(i, x)) == false){
            cout << x << endl;
            return 0;
        }
    }
    cout << 0 << endl;


    return 0;
}