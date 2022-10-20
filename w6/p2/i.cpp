#include <iostream>

using namespace std;

int main(){
    string s;
    cin >> s;
    int x = 0, y = 0;
    for(int i = 0; i < s.size(); i++){
        if(s[i] == 'F'){
            y++;
        }
        if(s[i] == 'B'){
            y--;
        }
        if(s[i] == 'R'){
            x++;
        }
        if(s[i] == 'L'){
            x--;
        }
    }
    while(y != 0){
        if(y < 0){
            cout<<'F';
            y++;
        }else if( y > 0){
            cout << 'B';
            y--;
        }
    }
    while(x != 0){
        if(x < 0){
            cout<<'R';
            x++;
        }else if( x > 0){
            cout << 'L';
            x--;
        }
    }

    return 0;
}