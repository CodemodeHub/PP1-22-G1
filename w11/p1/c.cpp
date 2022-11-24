#include <iostream>
#include <map>
#include <iterator>
// count all letters

using namespace std;

int main(){

    string s;
    cin >> s;

    map<char, int> m;
    map<char, int> ::iterator it;

    for(size_t i = 0; i < s.size(); i++){
        m[s[i]]++;
    }


    for(it = m.begin(); it != m.end(); it++){
        cout << it->first << " " << it->second << endl;
    }

    

    return 0;
}
