#include <iostream>
 
using namespace std;
 
bool check(string s){
    if(int(s[0]) < 65 || int(s[0]) > 72 || int(s[3]) < 65 || int(s[3]) > 72){
        return false;
    }
    if(int(s[1]) - 48 < 1 || int(s[1]) - 48 > 8 || int(s[4]) - 48 < 1 || int(s[4]) - 48 > 8){
        return false;
    }
    if(int(s[2]) != '-'){
        return false;
    }
    return true;
}
 
bool horse(string s){
    int x = abs(int(s[3]) - int(s[0]));
    int y = abs(int(s[4]) - int(s[1]));
    return (x == 2 && y == 1) || (x == 1 && y == 2);
}
 
int main(){
    string s;
    cin >> s;
    if(s.size() != 5){
        cout << "ERROR";
        return 0;
    }
    if(!check(s)){
        cout << "ERROR";
        return 0;
    }
    horse(s) ? cout << "YES" : cout << "NO";
 
    return 0;
}