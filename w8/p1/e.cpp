#include <iostream>

using namespace std;

void bracketsequence(string s, int i){
    if(i == s.size()) return;
    if(s.size() % 2 != 0){
        if(i < s.size()/2){
            cout << s[i] << '(';
        }else{
            if(i == s.size() - 1){
                cout << s[i];
            }else{
                cout << s[i] << ')';
            }
        }
    }else{
        if(i < s.size()/2 - 1){
            cout << s[i] << '(';
        }else{
            if(i == s.size()/2 - 1){
                cout << s[i];
            }
            else if(i == s.size() - 1){
                cout << s[i];
            }else{
                cout << s[i] << ')';
            }
        }
    }
    return bracketsequence(s,i+1);
}

int main(){
    string s;
    cin >> s;
    bracketsequence(s,0);
    return 0;
}