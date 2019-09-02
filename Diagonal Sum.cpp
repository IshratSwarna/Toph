#include<bits/stdc++.h>
#define ll long long
#define pb push_back
#define mp make_pair
#define pii pair<int,int>
#define pll pair<long long>
#define vii vector<int>
#define vll vector<long long>
using namespace std;
vll v;
int main()
{
    ll n;
    scanf("%lld",&n);
    v.clear();
    ll val;
    for(ll i=0;i<n;i++){
        for(ll j=0;j<n;j++){
            scanf("%lld",&val);
            v.pb(val);
        }
    }
    sort(v.begin(),v.end());
    ll last = (n*n) -1;
    ll c;
    ll sum2 = 0 , sum1 = 0;
    if(n%2==1)
        c = n-1;
    else
        c = n;
    ll s = c-1;
    for(ll i=0;i<=s;i++)
        sum2 += v[i];
    ll t = last - c + 1;
    for(ll i=last;i>=t;i--)
        sum1 += v[i];
    ll dif = abs(sum1 - sum2);
    printf("%lld\n",dif);
    return 0;
}

