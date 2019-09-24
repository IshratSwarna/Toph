#include<bits/stdc++.h>
#define ll long long
#define pb push_back
#define mkp make_pair
#define vi vector<int>
#define vl vector<long long>
#define pii pair<int,int>
using namespace std;

int main()
{
    string s1,s2,s3,s4,s5,s6,s7;
    string ans ="";
    cin>>s1>>s2>>s3>>s4>>s5>>s6>>s7;

    int len = s1.size();
    int p,q;
    char a,b,c,d;
    for(int i=0;i<len;i+=6)
    {
        p = i;
        q = i+4;
        a = s1[p];
        b = s1[q];
        c = s7[p];
        d = s7[q];

        if(a=='.' && b=='.' && c=='*' && d=='*'){
            ans += "A";
        }
        else if(a=='*' && b=='*' && c=='*' && d=='.'){
            ans += "F";
        }
         else if(a=='.' && b=='*' && c=='.' && d=='.'){
            ans += "J";
        }
         else if(a=='.' && b=='.' && c=='.' && d=='*'){
            ans += "Q";
        }
         else if(a=='.' && b=='*' && c=='*' && d=='.'){
            ans += "S";
        }
         else if(a=='*' && b=='.' && c=='*' && d=='*'){
            if(s4[p+1]=='.'){
                ans += "L";
            }
            else if(s4[p+1]=='*'){
                ans += "R";
            }
        }
         else if(a=='*' && b=='.' && c=='*' && d=='.'){
            if(s4[q]=='*'){
                ans += "D";
            }
            else{
                if(s7[p+1] == '*'){
                    ans += "B";
                }
                else{
                    ans += "P";
                }
            }
        }
        else if(a=='.' && b=='.' && c=='.' && d=='.'){
            if(s3[p+2]=='*'){
                ans += "I";
            }
            else if(s5[q-1]== '*'){
                ans += "G";
            }
            else if(s4[q]=='*'){
                ans += "O";
            }
            else if(s4[q]=='.'){
                ans += "C";
            }
        }
         else if(a=='*' && b=='*' && c=='.' && d=='.'){
            if(s2[p+2]=='*'){
                ans += "T";
            }
            else if(s3[p+1]=='*'){
                ans += "Y";
            }
            else if(s5[p+1]=='*'){
                ans += "V";
            }
            else if(s5[p+2]=='*'){
                ans += "W";
            }
            else{
                ans += "U";
            }
        }
         else if(a=='*' && b=='*' && c=='*' && d=='*'){
            if(s6[q-1]=='*'){
                ans += "K";
            }
            else if(s4[p+1]=='*' && s4[p+2]=='*' && s4[p+3]=='*' && s4[p+4]=='*'){
                ans += "H";
            }
            else if(s4[p+1]=='*' && s4[p+2]=='*' && s4[p+3]=='*' && s4[p+4]=='.'){
                ans += "E";
            }
            else if(s3[p+1]=='*' && s3[q-1]=='*' ){
                ans += "X";
            }
            else if(s3[p+1]=='.' && s3[q-1]=='.' ){
                ans += "M";
            }
            else if(s3[p+1]=='*' && s3[q-1]=='.' ){
                ans += "N";
            }
            else if(s3[p+1]=='.' && s3[q-1]=='*' ){
                ans += "Z";
            }
        }

    }
    cout<<ans<<endl;
    return 0;
}


