#include<bits/stdc++.h>
#define ll long long
#define pb push_back
#define mp make_pair
#define pii pair<int,int>
#define pll pair<long long>
#define vii vector<int>
#define vll vector<long long>
using namespace std;

int main()
{
    int a,b;
    scanf("%d%d",&a,&b);
    char mat[a+4][b+4];
    for(int i=0;i<=a+1;i++){
        for(int j=0;j<=b+1;j++)
            mat[i][j] = '.';
    }
    for(int i=1;i<=a;i++){
        for(int j=1;j<=b;j++)
            scanf(" %c",&mat[i][j]);
    }
    int ans;
    int i,j;
    for(i=1;i<=a;i++){
        for(j=1;j<=b;j++){
            ans =0;
            if(mat[i][j] == '.'){
                if(mat[i][j-1] == '*')
                    ans++;
                if(mat[i-1][j-1]=='*')
                    ans++;
                if(mat[i-1][j]=='*')
                    ans++;
                if(mat[i-1][j+1]=='*')
                    ans++;
                if(mat[i][j+1]=='*')
                    ans++;
                if(mat[i+1][j+1]=='*')
                    ans++;
                if(mat[i+1][j]=='*')
                    ans++;
                if(mat[i+1][j-1]=='*')
                    ans++;
                if(ans>0)
                    mat[i][j] = '0' + ans;
            }
        }
    }


    for(i=1;i<=a;i++){
        for(j=1;j<=b;j++)
            cout<<mat[i][j];
        cout<<endl;
    }
    return 0;
}


