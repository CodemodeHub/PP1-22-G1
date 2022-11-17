#include <iostream>

using namespace std;
bool right(string s){
    bool sobachka = false;
    bool tochka = false;
    for(int i = 0; i < s.size(); i++){
        if(s[i] == '@' && i != 0 && i != s.size() - 1 && tochka == false){
            sobachka = true;
        }else if(s[i] == '.' && i != 0 && i != s.size() - 1 && sobachka == true){
            tochka = true;
        }
    }
    if(sobachka == true && tochka == true){
        return true;
    }else{
        return false;
    }
}

int main(){
    string s;
    cin >>s;
    cout << right(s);
    return 0;
}