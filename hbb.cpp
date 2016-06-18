#include <cstdio>
using namespace std;

typedef unsigned long long ull;

int main(){
	ull tc; scanf("%llu", &tc);
	while(tc--){
		ull k,l,e;
		scanf("%llu %llu %llu", &k, &l, &e);
		ull sum = e;
		ull i,age;
		
		for(i=0; i<k; i++){
			scanf("%llu", &age);
			sum+=age;
		}	
		if(sum <= l && (l%sum == 0))
			printf("YES\n");
		else
			printf("NO\n");
	}
	return 0;
}