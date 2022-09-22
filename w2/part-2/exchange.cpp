#include <iostream>

using namespace std;

int main(){
    int a, b, c, d;
    cin >> a >> b >> c >> d;

    

    if(a == c && b == d){
        cout << 0 << " " << 0 << endl;
    }else if(c >= a && d >= b){
        cout << c - a << " " << d - b << endl;
        
    }else if(c >= a && b >= d){
        cout << c - a - 1 << " " << 100 - b << endl;
    }

    return 0;
}