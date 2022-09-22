#include <iostream>

using namespace std;

int main(){
    string s;

    cin >> s;
    cout << s.size() << "\n";

    for(int i = 0; i < s.size(); i++){
        if(s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u'){
            cout << 1;
        }else{
            cout << s[i];
        }
    }

    return 0;
}