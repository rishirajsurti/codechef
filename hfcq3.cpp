#include <bits/stdc++.h>
using namespace std;

int coin[]={1, 2, 4, 6};

int dp[500];

void ways(){
	memset(dp, 0, sizeof 0);
	dp[0] = 1;
	int i,j;
	for(i=0; i<4; i++){
		for(j=coin[i]; j<500; j++)
			dp[j] += dp[j-coin[i]];
	}
}
int main(){
	int t; scanf("%d", &t);
	while(t--){
		int b, n; 
		scanf("%d %d", &b, &n);
		ways();
		printf("%d\n", dp[b+n]);
	}
	return 0;
}