#include <iostream>

using namespace std;

int PosDegree(int num, int deg){
    int res = 1;
    while(deg--){
        res *= num;
    }
    
    return res;
}
double NegativeDeg(int num, int deg){
    double res = 1;
    int d = - deg; 
    while(d--){
        res *= num;
    }
    return 1/res;
}
// 2 -2

int main(){
    int a, n;
    cin >> a >> n;
    if(n > 0){
        cout << PosDegree(a,n);
    }
    // else{
    //     cout<<PosDegree(a,n);
    // }
    else{
        cout << 1/PosDegree(a,n);
    }

    return 0;
}