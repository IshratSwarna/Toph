#include<bits/stdc++.h>
#define ll long long
using namespace std;

vector<ll>v[1000];
void PrimeFactor(ll n)
{
    ll i;
    for(i=0;i<1000;i++)
        v[i]=0;
    ll cop = n;
    set<ll>s;
    set<ll>::iterator it;
    ll c=0;
    while(n%2==0){
        v[2]++;
        s.insert(2);
        n = n/2;
    }
    ll sq= sqrt(n);
    for(i=3;i<=sq;i+=2){
        while(n%i == 0){
            v[i]++;
            s.insert(i);
            n=n/i;
        }
    }
    if(n>2){
        s.insert(n);
        v[n]++;
    }

    cout<<s.size()<<endl;
    for(it=s.begin();it!=s.end();it++)
        cout<<*it<<" ";
    printf("\n");
    for(i=0;i<1000;i++){
        if(v[i]!=0)
            cout<<i<<" -> "<<v[i]<<endl;
    }
}
int main()
{
    ll N;
    scanf("%lld",&N);
    PrimeFactor(N);
    return 0;
}
