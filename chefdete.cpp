#include <cstdio>
#include <cstring>
using namespace std;

typedef unsigned long long llu;
llu r[100001];
bool killer[100001];

int main(){
	llu n;
	scanf("%llu", &n);
	memset(r, 0, sizeof r);
	memset(killer, true, sizeof killer);
	llu i,k;
	for(i=1; i<=n; i++){
		scanf("%llu", &k);
		killer[k] = false;
	}
	bool p = false;
	for(i=1; i<=n; i++){
		if(killer[i]){
			if(i>1 && p)
				printf(" ");
			printf("%llu",i);
			p = true;
		}
	}
	printf("\n");
	return 0;
}