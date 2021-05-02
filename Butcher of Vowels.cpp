#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	scanf("%d", &t);
	string s;
	int len, c;
	cin.ignore();
	while(t--){
		getline(cin, s);
		len = s.size();
		c=0;
		for(int i=0; i<len; i++){
			if(s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u'){
				c=1; break;
			}
		}
		if(c==1){
			printf("Yes\n");
		}
		else{
			printf("No\n");
		}
	}
	return 0;
}
