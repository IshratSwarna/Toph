#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin>>s;
    int len = s.size();
    if((s[0] >=97) && (s[0]<=122))
        s[0] = s[0] - 32;
    string ans = "";
    for(int i=0;i<len;i++){
        if(s[i] == 's'){
             ans = ans + "$";
        }
        else if(s[i] == 'i'){
            ans = ans + "!";
        }
        else if(s[i] == 'o'){
            ans = ans + "()";
        }
        else{
            ans = ans + s[i];
        }
    }
    ans = ans + ".";
    cout<<ans<<endl;
    return 0;
}
