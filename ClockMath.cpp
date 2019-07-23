#include<bits/stdc++.h>
using namespace std;

int main()
{
    double h,m ,mh ,hd;
    scanf("%lf%lf",&h, &m);
    mh = m/5.0;
    hd = (h*30.0) + (m*0.5);
    if(hd >=360.0)
        hd = hd - 360.0;
    double ans1 =abs(hd - (mh*30.0)) ;
    double ans2 = 360.0 - ans1;
    double ans = min(ans1,ans2);
    printf("%f",ans);
    return 0;
}
