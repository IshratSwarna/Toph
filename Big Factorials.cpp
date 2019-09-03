#include<bits/stdc++.h>
#define ll long long
using namespace std;

ll fact(ll n){
    if(n==1 || n==0)
        return 1;
    return n * fact(n-1);
}
int main()
{
    ll n;
    scanf("%lld",&n);
    if(n>=20)
        printf("0000");
    else{
        ll fval = fact(n);
        ll ans = fval%10000;
        printf("%lld",ans);
    }
    return 0;
}
