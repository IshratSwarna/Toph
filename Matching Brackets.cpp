#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin>>s;
    int len = s.size();
    stack<char>st;
    st.push(s[0]);
    for(int i=1;i<len;i++){
        if(s[i]=='(' || s[i]=='{' || s[i]=='['){
            st.push(s[i]);
        }
        else{
            if(s[i]==')'){
                if(!st.empty()){
                    if(st.top() == '(')
                       st.pop();
                    else
                        st.push(s[i]);
                }
                else
                        st.push(s[i]);
            }
            else if (s[i]=='}'){
                if(!st.empty()){
                    if(st.top() == '{')
                        st.pop();
                    else
                        st.push(s[i]);
                }
                else
                    st.push(s[i]);
            }
            else if(s[i]==']'){
                if(!st.empty()){
                    if(st.top()=='[')
                        st.pop();
                    else
                    st.push(s[i]);
                }
                else
                    st.push(s[i]);
            }
        }
    }
    if(st.empty() == 1){
        printf("Yes\n");
    }
    else{
        printf("No\n");
    }
    return 0;
}
