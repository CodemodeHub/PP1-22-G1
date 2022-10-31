#include <iostream>

using namespace std;

int countNumbers(string s, int i, int res){
    if(i == s.size()) return res;
    if(s[i] >= 48 && s[i] <= 57) res += 1;
    return countNumbers(s,i+1,res);
}

int main(){
    string s;
    cin >> s;
    cout <<countNumbers(s,0,0);
    return 0;
}