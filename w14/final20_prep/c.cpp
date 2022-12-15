#include <iostream>
#include <stack>

using namespace std;

int main(){
    int n;
    cin >> n;

    stack<int> st;
    while(n--){
        int x;
        cin >> x;
        if(st.empty()){
            st.push(x);
        }else{
            if(x >= st.top()){
                st.pop();
            }
            st.push(x);
        }

    }

    cout << st.size();
    
    return 0;
}