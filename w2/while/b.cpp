#include <iostream>

using namespace std;

int main(){
    // вводится число n, затем n чисел. Найти среди них максимум
    int n;
    cin >> n;

    int max = -1;

    for(int i = 0; i < n; i++){
        int x; 
        cin >> x;
        if(x > max){
            max = x; // max становится x
        }
    }

    cout << max << endl;

    return 0;
}