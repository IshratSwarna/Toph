#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    int t;
    scanf("%d",&t);
    string s1= "";
    string s2= "";
    string s3= "";
    string s4= "";
    string s5= "";
    char ch ;
    ll a,b;
    ll res;
    for(int i=1;i<=t;i++){
        scanf("%lld",&a);
        cin>>ch;
        scanf("%lld",&b);
        if(ch == '+')
            res = a +b;
        else if(ch == '-')
            res = a-b;
        else if(ch == '*')
            res = a*b;
        if(res<0)
            res = (-1)*res;
        int p=0;
        while(true)
        {
            int dig = res%10;
            res = res/10;

            if(dig == 0){
                if(p==0){
                    s1 += "***"; s2 += "* *";s3 += "* *";s4 += "* *";s5 += "***";
                }
                else{
                     s1 += " ***"; s2 += " * *";s3 += " * *";s4 += " * *";s5 += " ***";
                }
                p=1;
            }
            else if(dig == 1){
                if(p==0){
                    s1 += " * "; s2 += " * ";s3 += " * ";s4 += " * ";s5 += " * ";
                }
                else{
                    s1+= "  * "; s2 += "  * ";s3 += "  * ";s4 += "  * ";s5 += "  * ";
                }
                p=1;
            }
            else if(dig == 2){
                if(p==0){
                    s1 += "***"; s2 += "*  ";s3 += "***";s4 += "  *";s5 += "***";
                }
                else{
                    s1 += " ***"; s2 += " *  ";s3 += " ***";s4 += "   *";s5 += " ***";
                }
                p=1;
            }
            else if(dig == 3){
                if(p==0){
                    s1 += "***"; s2 += "*  ";s3 += "***";s4 += "*  ";s5 += "***";
                }
                else{
                    s1 += " ***"; s2 += " *  ";s3 += " ***";s4 += " *  ";s5 += " ***";
                }
                p=1;
            }
            else if(dig == 4){
                if(p==0){
                    s1 += "* *"; s2 += "* *";s3 += "***";s4 += "*  ";s5 += "*  ";
                }
                else{
                    s1 += " * *"; s2 += " * *";s3 += " ***";s4 += " *  ";s5 += " *  ";
                }
                p=1;
            }
            else if(dig == 5){
                if(p==0){
                    s1 += "***"; s2 += "  *";s3 += "***";s4 += "*  ";s5 += "***";
                }
                else{
                    s1 += " ***"; s2 += "   *";s3 += " ***";s4 += " *  ";s5 += " ***";
                }
                p=1;
            }
            else if(dig == 6){
                if(p==0){
                    s1 += "***"; s2 += "  *";s3 += "***";s4 += "* *";s5 += "***";
                }
                else{
                    s1 += " ***"; s2 += "   *";s3 += " ***";s4 += " * *";s5 += " ***";
                }
                p=1;
            }
            else if(dig == 7){
                if(p==7){
                    s1 += "***"; s2 += "*  ";s3 += "*  ";s4 += "*  ";s5 += "*  ";
                }
                else{
                    s1 += " ***"; s2 += " *  ";s3 += " *  ";s4 += " *  ";s5 += " *  ";
                }
                p=1;
            }
            else if(dig == 8){
                if(p==0){
                    s1 += "***"; s2 += "* *";s3 += "***";s4 += "* *";s5 += "***";
                }
                else{
                    s1 += " ***"; s2 += " * *";s3 += " ***";s4 += " * *";s5 += " ***";
                }
                p=1;
            }
            else if(dig == 9){
                if(p==0){
                    s1 += "***"; s2 += "* *";s3 += "***";s4 += "*  ";s5 += "*  ";
                }
                else{
                    s1 += " ***"; s2 += " * *";s3 += " ***";s4 += " *  ";s5 += " *  ";
                }
                p=1;
            }
            if(res==0)
                break;
        }

        reverse(s1.begin(),s1.end());
        reverse(s2.begin(),s2.end());
        reverse(s3.begin(),s3.end());
        reverse(s4.begin(),s4.end());
        reverse(s5.begin(),s5.end());
        printf("Case #%d:\n",i);
        cout<<s1<<endl;
        cout<<s2<<endl;
        cout<<s3<<endl;
        cout<<s4<<endl;
        cout<<s5<<endl;
        if(i!=t)
            printf("\n");
        s1 = ""; s2=""; s3=""; s4=""; s5="";
    }
    return 0;
}
