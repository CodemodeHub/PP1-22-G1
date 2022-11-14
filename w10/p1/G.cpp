#include <iostream>
#include<vector>
#include<cmath>
// создать вектор праймов

using namespace std;
vector<int> v;
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

void primeByRec(int n,int i){
    if(n == 1) return;
    if(n % v[i] == 0){
        cout << v[i] << " ";
        return primeByRec(n/v[i], i);
    }else{
        return primeByRec(n, i + 1);
    }
}

int main(){
    int n;
    cin >> n;
    v = primes(n);
    // for(int i = 0; i < v.size(); i++){
    //     cout << v[i] << " ";
    // }
    // while(n != 1){
    //     for(int i = 0; i < v.size(); i++){
    //         if(n % v[i] == 0){
    //             n = n / v[i];
    //             cout << v[i] << " ";
    //             break;
    //         }
    //     }
    // }
    primeByRec(n,0);
    return 0;
}