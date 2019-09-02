#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s;

    while(cin>>s)
    {
        int sc = 0 , uc = 0, num = 0;
        int len = s.size();
        int ans = 0;
        for(int i=0;i<len;i++){
            if(sc>= 1 && uc>=1 && num>=1){
                ans++; sc=0;uc=0;num=0;
            }
            if(s[i] <='z' && s[i] >='a')
                sc++;
            else if(s[i] <='Z' && s[i] >='A')
                uc++;
            else
                num++;
        }
        if(sc>= 1 && uc>=1 && num>=1){
                ans++; sc=0;uc=0;num=0;
        }
        printf("%d\n",ans);
    }
    return 0;
}
