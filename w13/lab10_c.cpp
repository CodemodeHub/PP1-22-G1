#include<bits/stdc++.h>

using namespace std;

void printstack (stack <char> st){
    while (!st.empty()) {
        cout << st.top();
        st.pop();
    }
}

int main(){
    string s;
    cin >> s;

    stack <char> st;


    for (int i=0; i<s.size(); i++){
        if (st.empty()) {
            st.push(s[i]);
        } else {
            string l = "";
            char c = st.top(); 
            l += c;
            l += s[i];
            int k = stoi(l);
            if (sqrt(k)*sqrt(k)==k){
                st.pop();
            } else if (st.top()){
                st.push(s[i]);
            }
        }
    }
    if (st.empty()){
        cout << "Stack is empty";
    }
    else {
        printstack(st);
    }
    return 0;
}