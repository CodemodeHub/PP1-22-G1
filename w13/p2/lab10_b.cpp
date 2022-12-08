#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
long long Power(long long x, long long n){
    if(n==0){
        return 1;
    }
    else if(n==1){
        return x;
    }
    else if(n%2==0){
        return Power(x*x, n/2);
    }else{
        return Power(x*x, n/2)*x;
    }
}

int x=-1;
long long GenPow(){
    x++;
    return Power(x, x);
    // return powl(x, x);

}

int main(){
    int n;
    cin >> n;
    vector<long long> v(n+1);
    
    generate(v.begin(), v.end(), GenPow);

    for(int i=0; i<v.size(); i++){
        cout << v[i] << " ";
    }
    return 0;
}