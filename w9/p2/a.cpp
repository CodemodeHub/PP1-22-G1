#include <iostream>
// SHIFT lowercase
using namespace std;

void shift1(string s, int key){
    for(int i = 0; i < s.size(); i++){
        s[i] = s[i] + key;
    }
    cout << s << endl;
}

void shift2(string s, int key){
    for(int i = 0; i < s.size(); i++){
        if(s[i] + key > 'z'){
            s[i] = s[i] + key - 26;
        }else{
            s[i] = s[i] + key;
        }
    }
    cout << s << endl;
}


void shift3(string s, int key){
    key %= 26;
    for(int i = 0; i < s.size(); i++){
        if(s[i] + key > 'z'){
            s[i] = s[i] + key - 26;
        }else{
            s[i] = s[i] + key;
        }
    }
    cout << s << endl;
}

int main(){
    string s;
    int key;

    cin >> s >> key;

    shift1(s, key);
    shift2(s, key);
    shift3(s, key);

    return 0;
}