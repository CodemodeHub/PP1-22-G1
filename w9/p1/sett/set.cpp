#include <iostream>
#include<set>
#include<iterator>
using namespace std;

int main(){
    set<int> s,s2;
    set<int> :: iterator it;
    // set<char> s3;
    // set<char> :: iterator it2;
    int n;
    cin >> n;
    for(int i = 0; i < n; i++){
        int x;
        cin >> x;
        s.insert(x);
    }
    for(int i = 0; i < n; i++){
        int x;
        cin >> x;
        s2.insert(x);
    }
    for(it = s.begin();it != s.end();it++){
        cout << *it << " ";
    }
    cout << endl;
    for(it = s2.begin();it != s2.end();it++){
        cout << *it << " ";
    }
    return 0;
}