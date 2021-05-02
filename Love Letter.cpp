#include<bits/stdc++.h>
using namespace std;
int crr[2002];
int main()
{
	int n, m;
	scanf("%d%d", &n, &m);
	int line = 2*n;
	string s;
	int len, c, i;
	int arr[line +2];
	cin.ignore();
	for(i=0; i<line; i++){
		getline(cin, s);
		len = s.size();
		c=0;
		for(int j=0; j<len; j++){
			if(s[j] != ' ')
				c++;
		}
		arr[i]=c;
	}
	sort(arr, arr+line);
	bool ans=1;
	int re;
	for(i=line-1; i>=0; i--){
		//cout<<arr[i]<<endl;
		if(crr[i]==0){
			re = m - arr[i];
			if(re<=0){
				ans = 0; break;
			}
			for(int j=i-1; j>=0; j--){
				if((arr[j] <=re) && (crr[j]==0)){
					crr[i]=1;
					crr[j]=1;
					break;
				}
			}
		}
		if(crr[i] == 0){
			ans=0; break;
		}
	}
	if(ans==0){
		printf("NO\n");
	}
	else{
		printf("YES\n");
	}
	return 0;
}
