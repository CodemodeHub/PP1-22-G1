#include <iostream>
#include <vector>
#include <map>
#include <set>
#include <iterator>
#include <cmath>
#include <limits.h>
#include <algorithm>

using namespace std;

int main(){
    int n;
    cin >> n;
    int k = n;
    map <char, int> m;
    map <char, int> :: iterator it1, it2;
    while(n--){
        string k;
        cin >> k;
        set <char> s;
        set <char> :: iterator it;
        for (int i=0; i<k.size(); i++){
            s.insert(k[i]);
        }
        // for (it=s.begin(); it!=s.end(); it++){
        //     cout << *it << " ";
        // }
        // cout << endl;
        for (it=s.begin(); it!=s.end(); it++){
            m[*it]++;
        }
        // for (it1=m.begin(); it1!=m.end(); it1++){
        //     cout << (*it1).first << " " << (*it1).second << endl;
        // }
    }
    bool out = false;

    for (it2=m.begin(); it2!=m.end(); it2++){
        if ((*it2).second==k){
            out = true;
            cout << (*it2).first << " ";
        }
    }
    if(out == false){
        cout << "NO COMMON CHARACTERS";
    }
    
    return 0;
}