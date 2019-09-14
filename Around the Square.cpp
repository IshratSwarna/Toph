#include<bits/stdc++.h>
#define pi acos(-1)
using namespace std;

int main()
{
    int a,r1,r2,r3,r4;
    double ans,c1,c2,c3,c4;
    while(cin>>a>>r1>>r2>>r3>>r4){
        c1 = pi*r1*r1*0.25;
        c2 = pi*r2*r2*0.25;
        c3 = pi*r3*r3*0.25;
        c4 = pi*r4*r4*0.25;
        ans = (a*a) - (c1+c2+c3+c4);
        printf("%.3lf\n",ans);
    }
    return 0;
}
