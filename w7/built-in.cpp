#include <iostream>

using namespace std;

int main(){
    string s = "ABCabc123+-;";

    for(int i = 0; i < s.size(); i++){
        if(islower(s[i])){
            cout << "lowercase\n";
        }else if(isupper(s[i])){
            cout << "Uppercase\n";
        }else if(isdigit(s[i])){
            cout << "digit\n";
        }else if(!isalnum(s[i])){
            cout << "symbol\n";
        }
    }

    return 0;
}