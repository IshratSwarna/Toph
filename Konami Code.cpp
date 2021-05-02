///KMP Algo
#include<bits/stdc++.h>
using namespace std;

int main()
{
	string B = "UUDDLRLRBA";
	string A;
	int LA;
	int LB = B.size();
	int ans, j;
	cin>>A;
	A = B + "#" + A;
	LA = A.size();
	int pi[LA+1];
	pi[0] = 0;
	for(int i=1; i<LA; i++){
		j = pi[i-1];
		while(j>0 && A[j]!=A[i])
			j = pi[j-1];
		if(A[j] == A[i])
			j++;
		pi[i] = j;
	}
	ans = 0;
	for(int i=LB; i<LA; i++){
		if(pi[i] == LB)
			ans++;
	}
	printf("%d\n", ans);
}
