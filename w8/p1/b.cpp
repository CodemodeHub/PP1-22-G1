#include <iostream>

using namespace std;

int forMax(string s){
    int mx = -1;

    for(int i = 0; i < s.size(); i++){
        if(s[i] - '0' > mx){
            mx = s[i] - '0';
        }
    }
    return mx;
}

int recMax(string s, int i, int mx){
    if(i > s.size() - 1) return mx; // condition of quit
    if(s[i] - '0' > mx){
        mx = s[i] - '0';
    }
    return recMax(s, i+1, mx);
}

int recMax2(string s, int i, int mx){
    if(i > s.size() - 1) return mx; // condition of quit
    if(s[i] - '0' > mx){
        return recMax(s, i+1, s[i] - '0');
    }else{
        return recMax(s, i+1, mx);
    }
}



int main(){
    string s;
    cin >> s;

    // cout << forMax(s);
    cout << recMax2(s, 0, -1);

    return 0;
}