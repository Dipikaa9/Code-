#include<bits/stdc++.h>
using namespace std;

int main() {
    string s = " I am good ";
    stack<char> st;
    
    
    //for(int i = 0; i<s.size(); i++)
    for(int i = 0; i < (int)s.size(); i++)

    {
      
        st.push(s[i]);

    }
    string ans = "";
   
    while(!st.empty()) {
     ans +=st.top();
        st.pop();
    }
    cout << ans << endl;
   
}
