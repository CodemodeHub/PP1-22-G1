#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin >> n;
    stack<int> st;
    while(n--){
        int x;
        cin >> x;
        st.push(x);
    }
    while(true){
        string s;
        cin >> s;
        if(s == "end"){
            break;
        }if(s == "sell"){
            st.pop();
        }if(s == "add"){
            int x;
            cin >> x;
            st.push(x);
        }
    }
    while(!st.empty()){
        cout << st.top() << " ";
        st.pop();
    }

    return 0;
}