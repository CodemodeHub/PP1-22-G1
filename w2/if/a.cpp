#include <iostream>

using namespace std;

int main(){
    int n;

    cin >> n;

    if(n % 2 == 0){
        // предположим 0 тут
        if(n == 0){
            cout << "Zero" << endl;
        }else{
            cout << "Even" << endl;
        }
        
    }else{
        cout << "Odd" << endl;
    }

    return 0;
}