#include<bits/stdc++.h>
#define ll long long
#define pb push_back
#define mkp make_pair
#define pii pair<int,int>
#define MAX 100003
#define MOD 1000000007
using namespace std;

ll Given[100002];
struct info{
    ll prop , sum;
}Tree[4*MAX];

ll bigmod ( ll a, ll p, ll m ) {
  ll x;
  if(p==0) return 1%m;
  x = bigmod(a,p/2 , m);
  x = (x*x)%m;
  if(p%2 != 0){
    x = (x*(a%m))%m;
  }
  return x;
}
void SegInit(ll node , ll s , ll e)
{
    if(s==e){
        Tree[node].prop = 0;
        Tree[node].sum = Given[s]; return ;
    }
    ll mid = (s+e)/2;
    ll l = 2*node;
    ll r = l+1;
    SegInit(l,s,mid);
    SegInit(r,mid+1,e);
    Tree[node].sum = Tree[l].sum + Tree[r].sum ;
}

void SegUpdate(ll node, ll s, ll e, ll i, ll j, ll x)
{
    if(j<s || i>e) return;
    if(i<=s && j>=e){
        Tree[node].prop += x;
        Tree[node].sum += ((e-s+1)*x); return;
    }
    ll mid = (s+e)/2;
    ll l = 2*node;
    ll r = l+1;
    SegUpdate(l,s,mid,i,j,x);
    SegUpdate(r,mid+1,e,i,j,x);
    Tree[node].sum = Tree[l].sum + Tree[r].sum + ((e-s+1)*Tree[node].prop);
}

ll SegQuery(ll node, ll s, ll e, ll i, ll j, ll carry=0)
{
    if(i>e || j<s)
        return 0;
    if(i<=s && j>=e){
        return Tree[node].sum + (carry*(e-s+1));
    }
    ll mid = (s+e)/2;
    ll l = 2*node;
    ll r = l+1;
    ll q1 = SegQuery(l,s,mid,i,j,carry+Tree[node].prop);
    ll q2 = SegQuery(r,mid+1,e,i,j,carry+Tree[node].prop);
    return q1+q2;
}

int main()
{
    ll n;
    scanf("%lld",&n);

    for(ll i=1;i<=n;i++){
        scanf("%lld",&Given[i]);
    }
    ll res;
    SegInit(1,1,n);

    ll Q;
    scanf("%lld",&Q);
    //ll p,q,r;
    ll ans;
    ll l,r,k;
    while(Q--)
    {
        scanf("%lld%lld%lld",&l,&r,&k);
        /*while(r--){
            res = SegQuery(1,1,n,p,q,0);
            SegUpdate(1,1,n,p,q,res);
        }*/
        ans = SegQuery(1,1,n,l,r,0) % MOD;
        ll tmp1 = ((bigmod(r-l+2,k,MOD) % MOD) - (1 % MOD)) % MOD;
        ll tmp2 = bigmod(r-l+1,MOD-2,MOD);
        ll tmp = ((tmp1 % MOD) * (tmp2 % MOD)) % MOD;
        ans = ( ans * tmp ) % MOD;
        SegUpdate ( 1, 1, n, l, r, ans );
    }
    for(ll i=1;i<=n;i++){
        res = SegQuery(1,1,n,i,i,0);
        res = res % MOD;
        printf("%lld",res);
        if(i!=n){
            printf(" ");
        }
    }
    printf("\n");
    return 0;
}
