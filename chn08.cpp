#include <cstdio>
#include <algorithm>
using namespace std;

#define INF 1000000007
typedef long long int ull;

int main(){
	int t; scanf("%d", &t);
	while(t--){
		ull a, b,c, n, i;
		scanf("%lld %lld %lld", &a, &b, &n);
		for(i=3; i<=n; i++){
			c = b - a;
			a = b;
			b = c;
		}
		if(c >= 0)	
			printf("%lld\n", c%INF);
		else
			printf("%lld\n", INF+c);
	}
	return 0;
}