#include <iostream>

using namespace std;

int main(){
    int n;
    cin >> n;

    if( n % 10 == 1 && n != 11){
        cout << n << " korova" << endl;
    }else if(n >= 10 && n <=  20){
        cout << n << " korov" << endl;
    }else if(n % 10 > 1 && n % 10 < 5){
        cout << n << " korovy" << endl;
    }else{
        cout << n << " korov" << endl;
    }


    return 0;
}