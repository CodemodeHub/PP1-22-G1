#include <iostream>
#include<vector>
#include<cmath>
#include<iterator>
#include<algorithm>
using namespace std;

bool is_prime(int x){
    if(x == 1 || x == 0) return false;
    for(int i = 2; i < sqrt(x) + 1; i++){
        if(x % i == 0) return false;
    }
    return true;
}

int main(){
    
    int x;
    vector<int> v;
    while(cin >> x){
        if( x == -1) break;
        v.push_back(x);
    }
    vector<int> :: iterator it;
    // for(it = v.begin(); it != v.end();it++){
    //     if(is_prime(*it)) v.erase(it); 
    // }
    for(int i = 0; i < v.size(); i++){
        if(is_prime(v[i])) v.erase(v.begin() + i);
    }
    reverse(v.begin(),v.end());
    for(it = v.begin();it != v.end(); it++){
        cout << *it << " "; 
    }

    return 0;
}