#include <iostream>

using namespace std;

double maxi(double a[],int n){
    double max = INT_MIN;
    for(int i = 0; i < n; i++){
        if(max < a[i]){
            max = a[i];
        }
    }
    return max;
}


int main(){
    int n;
    cin >>n;
    double a[n];
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    double d = maxi(a,n);
    int x = maxi(a,n);
    cout<<d<<endl<<x;
    return 0;
}