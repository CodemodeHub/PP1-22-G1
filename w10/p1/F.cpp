#include <iostream>
#include<vector>
#include<cmath>
// создать вектор праймов

using namespace std;
vector<int> primes(int n){
    vector<int> v;
    for(int i = 2; i <= n; i++){
        bool res = true;
        for(int j = 2; j < int(sqrt(i)) + 1; j++){
            if(i % j == 0){
                res = false;
            }
        }
        if(res == true){
            v.push_back(i);
        }
    }
    return v;
}
int main(){
    int n;
    cin >> n;
    vector<int> v = primes(n);
    // for(int i = 0; i < v.size(); i++){
    //     cout << v[i] << " ";
    // }
    while(n != 1){
        for(int i = 0; i < v.size(); i++){
            if(n % v[i] == 0){
                n = n / v[i];
                cout << v[i] << " ";
                break;
            }
        }
    }
    return 0;
}
// int n; 121
// string s = to_string(n) "121"