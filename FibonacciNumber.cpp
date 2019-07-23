#include<bits/stdc++.h>
#define ll long long
using namespace std;

ll Fibonacci(ll n)
{
    ll arr[n+3];
    arr[0] =0 ;
    arr[1] = 1;

    for(ll i=2;i<=n;i++){
        arr[i] = arr[i-1] + arr[i-2];
    }
    return arr[n];
}
int main()
{
    ll N;
    scanf("%lld",&N);
    ll ans = Fibonacci(N);
    printf("%lld",ans);
    return 0;
}
