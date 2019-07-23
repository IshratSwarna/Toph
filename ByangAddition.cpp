#include<bits/stdc++.h>
#define ll long long
using namespace std;

int DigitAdd(ll n1 , ll n2)
{
    while( n1>0 || n2>0)
    {
        ll p=n1%10;
        ll q=n2%10;
        n1 = n1/10;
        n2 = n2/10;
        if((p+q) >9){
            return 1;
        }
    }
    return 0;
}
int main()
{
    ll a,b;
    scanf("%lld%lld",&a,&b);
    if(DigitAdd(a,b))
        printf("Yes");
    else
        printf("No");
    return 0;
}
