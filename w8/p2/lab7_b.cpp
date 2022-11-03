#include <iostream>

using namespace std;
string binary(int n){
    string s= "";
    while(n != 0){
        s += n % 2 + 48;
        n /= 2;
    }
    return s;
}
string s = "";
string rec_binary(int n){
    //string s = ""; wrong
    if(n == 0) return s;
    s += n % 2 + 48;
    return rec_binary(n/2);
}
int main(){
    int n;
    cin >> n;
    s = rec_binary(n);
    for(int i = s.size() - 1; i >=0; i--){
        cout << s[i];
    }
    return 0;
}