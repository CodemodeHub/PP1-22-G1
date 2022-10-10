#include <iostream>

using namespace std;

int main(){
    string s = "My favourite fruit is orange";

    cout<< s.find("apple") << endl;
    cout << string::npos << endl;

    string t = s.substr(22, 6);
    string e = s.substr(15);
    cout << t << endl;
    cout << e << endl;

    return 0;
}