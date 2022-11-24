#include <iostream>
#include <map>
#include <iterator>
// MAP


using namespace std;

int main(){

    int n;
    cin >> n;

    map<string, int> nameAndAge;

    for(int i = 0; i < n; i++){
        string s;
        int x;
        cin >> s >> x;
        // nameAndAge.insert(make_pair(s,x));
        nameAndAge[s] = x;
    }

    map<string, int> :: iterator it;

    for(it = nameAndAge.begin(); it != nameAndAge.end(); it++){
        // cout << (*it).first << " " << (*it).second << endl;
        cout << it->first << " " << it->second << endl;
    }
    

    return 0;
}