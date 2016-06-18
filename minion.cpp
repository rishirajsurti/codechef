#include <bits/stdc++.h>
using namespace std;

#define numberOfOnBits(S) (__builtin_popcount(S))

typedef unsigned long long ull;

ull max(ull a, ull b){
	return a > b ? a : b;
}
int main(){
	ull n; scanf("%llu", &n);
	ull i,j,x, y, d, max_x=0;
	ull dp[100001];
	memset(dp, 0, sizeof dp);	
	ull ans =0;
	
	for(j=0; j<n; j++){
		scanf("%llu %llu %llu", &x, &y, &d);
		for(i=x; i<=x+d; i++) dp[i] = 1;
		max_x = max(max_x, x+d);
	}
	/*for(j=0; j<n; j++){
		scanf("%llu %llu %llu", &x, &y, &d);
		for(i=x; i<=x+d; i++) ans = ans | (1<<i);
		max_x = max(max_x, x+d);
	}*/
	for(i=0; i<=max_x; i++) ans+=dp[i];
	printf("%llu\n", ans);
	return 0;
}