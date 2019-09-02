#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    string s;
    cin>>s;
    string ans ="";
    string cop;
    ll len = s.size() ;
    ll re =  len%3;
    ll c =(len/3) - 1;
    ll pos=0;
    for(ll i=0;i<re;i++){
        ans = ans + s[i];
    }
    if(re != 0 && len>re)
        ans = ans + ",";
    for(ll i=re;i<len;i++){
        if(pos == 3){
            ans = ans + ",";
            pos =0;
        }
        ans = ans + s[i];
        pos++;
    }
    cout<<ans<<endl;
    return 0;
}

