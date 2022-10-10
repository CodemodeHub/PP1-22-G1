#include<iostream>

using namespace std;

int main(){
    int n;
    cin>>n;
    int a[n],t[n];
    for(int  i=0; i<n;i++){
        cin>>a[i];
        t[i]=0;
    }
    bool test=true;
    int pos=0;
    for(int i=0; i<n;i++){
        for(int j=0;j<n;j++){
            if(a[i]==t[j]){
                test=false;
                break;
            }
        }
        if(test){
        t[pos] = a[i];
        pos++;
        }
        test = true;
    }
    for(int  i=0; i<n;i++){
        if(t[i] == 0) break;
         else cout<<t[i]<<" ";
    }
    return 0;
}