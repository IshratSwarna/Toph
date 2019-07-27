#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,a,b;
    scanf("%d%d%d",&n,&a,&b);

    int arr[n+1];
    for(int i=0;i<n;i++)
        scanf("%d",&arr[i]);

    int brr[n+2];
    brr[0] = 0;
    for(int i=1;i<=n;i++){
        brr[i] = brr[i-1] + arr[i-1];
    }

    int ans = brr[b+1] - brr[a];
    printf("%d",ans);
    return 0;
}
