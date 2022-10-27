#include <iostream>
#include<cmath>

using namespace std;

int yaslan(string k){
    int num = 0;
    // 1011
    for(int i = k.size() - 1; i >= 0; i--){
        num += pow(2,k.size() - 1- i)*(k[i] - 48);
    }
    return num;
}
int main(){
    string s;
    cin >> s;
    cout<<yaslan(s);
    return 0;
}