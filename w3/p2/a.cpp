#include <iostream>

using namespace std;

int main(){
    int n;
    cin >> n;
    int a[n];

    for(int i = 0; i < n; i++){
        int age, pol;
        cin >> age >> pol;
        if(pol == 1){
            a[i] = age;
        }
    }
    

    return 0;
}