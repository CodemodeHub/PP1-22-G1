#include <iostream>
#include<map>

using namespace std;

int main(){
    int n;
    cin >> n;
    map<pair<pair<string, string>, int>, string> m; // assyl aza 80- first, second - 0
    map<pair<pair<string, string>, int>, string> :: iterator it;
    while(n--){
        string s1, s2;
        int x, y;
        cin >> s1 >> x >> s2 >> y;
        m[{{s1,s2}, x + y}] = "Anita";
    }
    for(it = m.begin(); it != m.end(); it++){
        cout << (*it).first.first.first << " and " << (*it).first.first.second << " " <<(*it).first.second << endl;
    }
    return 0;
}