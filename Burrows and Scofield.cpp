#include<bits/stdc++.h>
using namespace std;

int main()
{
	string s1, s2;
	cin>>s1;
	cin>>s2;
	int l1 = s1.size();
	int l2 = s2.size();

	int x=0, y=0;
	for(int i=0; i<l1; i++){
		if(s1[i]>='0' && s1[i]<='9')
			x += (s1[i] - '0');
	}
	for(int i=0; i<l2; i++){
		if(s2[i]>='0' && s2[i]<='9')
			y += (s2[i] - '0');
	}
	int arr[4];
	arr[0] = x+y;
	arr[1] = x*y;
	arr[2] = abs(x-y);
	sort(arr,arr+3);
	printf("\"%d\"",arr[1]);
	return 0;
}
