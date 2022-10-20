#include <iostream>

using namespace std;

int main(){
    int n;
    cin >> n;

    int a[n][n];

    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            cin >> a[i][j];
        }
    }

    int x = n;
    while(x--){
        for(int i=0; i<n; i++){
            for(int j=0; j<n; j++){
                if(j - i == x){
                    cout << a[i][j] << " ";
                }
            }
        }
        cout << endl;
    }
    

    x++; // x стал равен 0, потому что был -1 на строчке 19

    while(x < n-1){
        x++;
        for(int i=0; i<n; i++){
            for(int j=0; j<n; j++){
                if(i - j == x){
                    cout << a[i][j] << " ";
                }
            }
        }
        cout << "\n";
    }

    return 0;
}