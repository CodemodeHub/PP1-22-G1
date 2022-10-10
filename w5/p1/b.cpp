#include <iostream>

using namespace std;

int main(){
    string s = "A123456789B";

    cout << "Length of string: " << s.size() << endl;
    cout << "last char of s: " << s[s.size() - 1] << endl;


    for(int i = 0; i < s.size(); i++){
        cout << s[i] << " ";
    }
    return 0;
}