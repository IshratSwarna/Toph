#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    scanf("%d",&n);
    int len;
    string s;
    while(n--)
    {
        cin>>s;
        string sub,cop;
        int sc = 0 , c =0;
        len = s.size();
        for(int i=0;i<len;i++){
            sub = "";
            for(int j=i;j<len;j++){
                sub +=s[j];
                cop = sub;
                reverse(cop.begin(),cop.end());
                if(cop==sub)
                    sc++;
                c++;
            }
        }
        double ans = (double)sc/(double)c;
        printf("%.3f\n",ans);
    }
    return 0;
}

