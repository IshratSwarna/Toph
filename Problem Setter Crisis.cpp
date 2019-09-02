#include<bits/stdc++.h>
#define ll long long
#define ull unsigned long long
#define pb push_back
#define mp make_pair
#define pii pair<int,int>
#define pll pair<long long>
#define vii vector<int>
#define vll vector<long long>
using namespace std;
bool v[10000];
struct Problem{
    ll time;
    ll dif;
    ll index;
};

bool comptime(Problem a, Problem b){
    return a.time<b.time;
}
bool compdif(Problem a, Problem b){
        return a.dif>b.dif;
}

void ProbSelection(Problem P[] , ll n , ll S , ll x)
{
    sort(P,P+n,comptime);
    //for(ll i=0;i<n;i++){
        //cout<<P[i].time<<" "<<P[i].dif<<" "<<P[i].index<<endl;
   // }
    ll maxd =0 ;
    ll ans =0;
    ll stime = 0;
    ll i;
    for(i=0;i<n and stime+P[i].time <= S;i++){
            v[P[i].index] = true;
            ans++;
            stime += P[i].time;
            maxd = max(maxd,P[i].dif);
    }
    printf("Case %lld: ",x);
    i--;
    if(i<0){
            printf("RIP LUIUPC\n");
    }
    else{
        ll rem = S - (stime-P[i].time);
        sort(P,P+n,compdif);
        for(i=0;i<n;i++){
            if((!v[P[i].index] ) and (P[i].time <= rem)){
                maxd = max(maxd,P[i].dif);
                break;
            }
        }
        if(ans==0)
            printf("RIP LUIUPC\n");
        else
            printf("%lld %lld\n",ans,maxd);

    }
}

int main()
{
    ll K;
    scanf("%lld",&K);
    ll N,S;
    for(ll i=1;i<=K;i++)
    {
        scanf("%lld%lld",&N,&S);
        Problem P[N+2];
        for(ll j=0;j<N;j++){
            cin>>P[j].time>>P[j].dif;
            P[j].index = j+1;
            v[j+1] = false;
        }
        //printf("Case %lld: ",i);
        ProbSelection(P,N,S,i);
    }
    return 0;
}
