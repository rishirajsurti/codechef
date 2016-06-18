#include <bits/stdc++.h>
using namespace std;
typedef unsigned long long ull;

int main(){
	ull t; scanf("%llu", &t);
	while(t--){
		ull n, i,j,prev, cur, ans = 0;
		scanf("%llu", &n);
		scanf("%llu", &prev);

		for(i=1; i<n; i++){
			scanf("%llu", &cur);
		//	printf("prev %llu cur %llu\n", prev, cur);
			if(cur > prev){
				ans += cur - prev;
				cur = prev;
			}
			prev = cur;
		}
		printf("%llu\n", ans);
	}
}