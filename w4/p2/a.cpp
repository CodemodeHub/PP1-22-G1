#include <iostream>
using namespace std;

int main(){
    int n, m = 1;
    cin >> n;
    int a[n][n];
    
    if(n % 2 != 0){
        a[n / 2][n / 2] = (n*n);  // we have center  
    }

    
    for(int i = 0; i < (n / 2); i++){
        for(int j = i; j < (n - i); j++){   // first row
            a[i][j] = m;
            m++;
        }
        for(int j = 1; j < (n - i - i); j++){   // right column
            a[j + i][(n - i) - 1] = m;    
            m++;
        }
        for(int j = (n - 2) - i; j >= i; j--){  // last row
            a[(n - i) - 1][j] = m;            
            m++;
        }
        for(int j = ((n - i) - 2); j > i; j--){ // left column
            a[j][i] = m;
            m++;
        }
    }
    
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n - 1; j++){
            cout << a[i][j] << " " ;
        }
        cout << a[i][n - 1] << endl;
    }
    return 0;
}