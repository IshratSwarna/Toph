#include<bits/stdc++.h>
#define ll long long
#define pb push_back
using namespace std;
vector<ll>v[1003];
int main()
{
    ll n,m,a,b;
    scanf("%lld%lld",&n,&m);
    for(ll i=1;i<=n;i++){
        scanf("%lld",&a);
        v[i].pb(a);
    }
    for(ll i=1;i<=m;i++){
        scanf("%lld%lld",&a,&b);
        v[a].pb(b);
        v[b].pb(a);
    }
    for(ll i=1;i<=n;i++){
        if(v[i][0] <=0){
            for(ll j=1;j<v[i].size();j++){
                a = v[i][j] ;
                v[a][0]--;
            }
        }
    }
    ll ans =0;
    for(ll i=1;i<=n;i++){
        if(v[i][0] <=0)
            ans++;
    }
    printf("%lld",ans);
    return 0;
}
