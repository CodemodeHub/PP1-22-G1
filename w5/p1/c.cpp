#include <iostream>

using namespace std;

int main(){
    string s = "ASDFGxcvbERTYdfghXCVBrtY";

    int cnt = 0;
    for(int i = 0; i < s.size(); i++){
        if(int(s[i]) >= 65 && int(s[i]) <= 90){
            cnt++;
            cout << s[i];
        }
    }
    cout << endl << cnt;

    
    

    return 0;
}