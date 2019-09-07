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
vector<bool>arr;
//vll arr;
void Sieve(){
    for(ll i=0;i<=7368788;i++){
        arr.pb(true);
    }
    arr[1] = false;
    for(ll i=2;i*i<=7368788;i++){
        if(arr[i] == true){
            for(ll p=i*i ;p<=7368788;p+=i)
                arr[p] = false;
        }
    }
    v.pb(0);
    for(ll i=2;i<=7368788;i++){
        if(arr[i] == true)
            v.pb(i);
    }
}

int main()
{
    ll N;
    scanf("%lld",&N);
    Sieve();
    printf("%lld",v[N]);
    return 0;
}

