#include<bits/stdc++.h>
#define ll long long
#define sf scanf
#define num 10000005
using namespace std;

bool Arr[10000009];
int Given[100005];
int Tree[400005];
void Sieve()
{
    for(int i=2;i<=num;i++)
        Arr[i] = true;
    Arr[0] = false;
    Arr[1] = false;
    for(int i=2;i*i<=num;i++){
        if(Arr[i]==true){
            for(int p=i*i ;p<=num;p+=i)
                Arr[p] = false;
        }
    }
}

void init(int node, int s, int e ){
    if(s==e){
        Tree[node] = Given[s]; return;
    }
    int mid = (s+e)/2;
    int l = 2*node;
    int r = l+1;
    init(l,s,mid);
    init(r,mid+1,e);
    Tree[node] = Tree[l] + Tree[r];
}

void update(int node, int s, int e, int in, int x){
    if(s>in || e<in)
        return;
    if(s>=in && e<=in){
        Tree[node] = x; return;
    }
    int mid = (s+e)/2;
    int l = 2*node;
    int r = l+1;
    update(l,s,mid,in,x);
    update(r,mid+1,e,in,x);
    Tree[node] = Tree[l] + Tree[r];
}

int query(int node, int s, int e, int x, int y){
    if(x>e || y<s)
        return 0;
    if(s>=x && e<=y){
        return Tree[node] ;
    }
    int mid = (s+e)/2;
    int l = 2*node;
    int r = l+1;
    int q1 = query(l,s,mid,x,y);
    int q2 = query(r,mid+1,e,x,y);
    return q1 + q2;
}



int main()
{
    int N;
    sf("%d",&N);
    Sieve();
    int n;
    for(int i=1;i<=N;i++){
         sf("%d",&n);
         if(Arr[n] == true){
            Given[i] = 1;
         }
    }
    init(1,1,N);

    int Q;
    scanf("%d",&Q);
    int check,x,y,res,p;
    for(int i=1;i<=Q;i++){
        scanf("%d%d%d",&check,&x,&y);
        if(check == 2){
            if(Arr[y] == true)
                p = 1;
            else
                p = 0;
            update(1,1,N,x,p);
        }
        else{
            res = query(1,1,N,x,y);
            printf("%d\n",res);
        }
    }
    return 0;
}
