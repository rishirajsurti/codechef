#include <cstdio>
#include <algorithm>
using namespace std;

#define MOD 1000000007

typedef unsigned long long llu;
llu a[100005];

int main(){
	int t; scanf("%d", &t);
	while(t--){
		llu n, x, m;
		llu i,j;
		scanf("%llu %llu %llu", &n, &x, &m);
		for(i=1; i<=n; i++)
			scanf("%llu", &a[i]);

		/*llu ans = a[x];
		for(i = x-1; i >= 1; i--){
			ans = ans % MOD;
			ans += (((a[i]%MOD)*(m%MOD))%MOD);
			m++;
		}
		printf("%llu\n", ans);*/
		for(i=1; i<=m; i++){
			for(j=2; j<=x; j++){
				a[j] = ((a[j] + a[j-1]) % MOD);
			}
		}
		printf("%llu\n", a[x]);
	}
}