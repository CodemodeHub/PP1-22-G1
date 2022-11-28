// mid upsolving, N
#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    string s = "";
    int n;
    cin >> n;
    for(int i = 0; i < n; i++){
        int x;
        cin >> x;
        while(x % 10 == 0){
            x /= 10;
        }
        s += to_string(x);
    }
    string s1 = s;
    reverse(s.begin(), s.end());
    if(s1 == s)
    cout << "YES";
    else cout << "NO";

    return 0;
}