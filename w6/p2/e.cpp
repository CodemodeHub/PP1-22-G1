#include <iostream>

using namespace std;

int main(){
    string s;
    cin >> s;
    int a[10];
    for(int i = 0; i < 10; i++){
        a[i] = 0;
    }
    for(int i = 0; i < s.size(); i++){
        a[s[i] - 48]++;  //s[i] = '1' s[i] = 49 a[49-48] = a[1]      
    }
    for(int i = 0; i < 10; i++){
        if(a[i] > 0){
            cout<<i<< ": "<<a[i]<<endl;
        }
    }
    return 0;
}