#include <iostream>
#include <vector>
#include <stack>

using namespace std;

int main(){
    int n;
    cin >> n;

    vector<int> a;

    for(int i = 0; i < n; i++){
        int x;
        cin >> x;
        a.push_back(x);
    }

    stack<int> s;
    int top  = 0;
    int area = 0;
    int m_area = 0;

    int i = 0;
    while(i < n){
        if(s.empty() || a[s.top()] <= a[i]){
            s.push(i);
            i++;
        }else{
            top = s.top();
            s.pop();

            if(s.empty()){
                area = a[top] * i;
            }else{
                area = a[top] * (i - s.top() - 1);
            }

            m_area = max(area, m_area);
            // if(area > m_area){
            //     m_area = area;
            // }
        }
    }

    while(!s.empty()){
        top = s.top();
        s.pop();

        if(s.empty()){
            area = a[top] * i;
        }else{
            area = a[top] * (i - s.top() - 1);
        }
        m_area = max(area, m_area);
    }

    cout << m_area << endl;


    return 0;
}