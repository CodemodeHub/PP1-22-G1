#include <iostream>
#include <stack>

using namespace std;

int main(){
    string s;
    cin >> s;

    stack<char> st;

    for(int i = 0; i < s.size(); i++){
        if(s[i] == ')' && st.top() == '('){
            st.pop();
        }else if(s[i] == ']' && st.top() == '['){
            st.pop();
        }else if(s[i] == '}' && st.top() == '{'){
            st.pop();
        }else{
            st.push(s[i]);
        }
    }
    
    printf(st.empty() == true ?  "YES" : "NO");

    return 0;
}