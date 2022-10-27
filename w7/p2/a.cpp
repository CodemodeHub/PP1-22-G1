#include <iostream>

using namespace std;

bool isCorrect(string s){
    if(int(s[0]) < 65 || int(s[0]) > 72 || int(s[3]) < 65 || int(s[3]) > 72){
        return false;
    }
    if(int(s[1]) - 48 < 1 || int(s[1]) - 48 > 8 || int(s[4]) - 48 < 1 || int(s[4]) - 48 > 8){
        return false;
    }
    if(int(s[2]) != '-'){
        return false;
    }
    return true;
    
}

bool isAbleToMove(string s){
    int a = abs(s[0] - s[3]);
    int b = abs(s[1] - s[4]);

    if((a == 2 && b == 1) || (b == 2 && a == 1)){
        return true;
    }else{
        return false;
    }
    
}

int main(){
    string s;
    cin >> s;
    if(s.size() != 5){
        cout << "ERROR\n";
        return 0;
    }

    if(isCorrect(s) == false){
        cout << "ERROR\n";
        return 0;
    }


    if(isAbleToMove(s)){
        cout << "YES\n";
    }else{
        cout << "NO\n";
    }

    return 0;
}