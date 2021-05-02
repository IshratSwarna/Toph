#include<bits/stdc++.h>
using namespace std;
map<char,int>mp;
int main()
{
	int T;
	scanf("%d",&T);
	string s, os;
	int len, ch;
	cin.ignore();
	for(int t=1; t<=T; t++){
		getline(cin, s);
		mp.clear();
		len = s.size();
		for(int i=0; i<len; i++){
			mp[s[i]]++;
		}
		printf("Case #%d:\n", t);
		for(int i=0; i<len; i++){
			if(mp[s[i]] > 0){
				cout<<s[i]<<" "<<mp[s[i]]<<"\n";
				mp[s[i]] = 0;
			}
		}
	}
	return 0;
}
