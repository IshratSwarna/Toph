#include<bits/stdc++.h>
#define ll long long
using namespace std;

ll DecToSmallBin(ll n)
{
    ll number = 0;
    while(n>0){
        if((n%2) == 1){
             number =(number*10)  + 1;
        }
        n=n/2;
    }
    return number;
}

ll BinToDec(ll n)
{
    ll decvalue = 0;
    ll base = 1;
    while(n>0){
        ll digit = n%10;
        n = n/10;
        decvalue = decvalue + (digit*base);
        base = base*2;
    }
    return decvalue;
}

int main()
{
    ll A;
    scanf("%lld",&A);
    ll number = DecToSmallBin(A);
    ll ans = BinToDec(number);
    printf("%lld",ans);
    return 0;
}
