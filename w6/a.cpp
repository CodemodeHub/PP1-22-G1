#include <iostream>

using namespace std;

int main(){
    int n;
    cin >> n;
    int sum = 0;
    if(n <= 0){
        for(int i = n; i <= 1; i++){
            sum += i;
        }
    }else{
        for(int i = 1; i <= n; i++){
            sum += i;
        }
    }
    cout << sum << endl;

    return 0;
}