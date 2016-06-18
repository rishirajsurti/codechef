#include <cstdio>
#include <iostream>

using namespace std;

int abs(int a){
	return a>0 ? a : -a;
}
int main(){
	int t;
	scanf("%d", &t);
	while(t--){
		int n,m,k;
		scanf("%d %d %d", &n, &m, &k);
		int diff = abs(n-m);
		if(k >= diff)
			printf("0\n");
		else
			printf("%d\n",diff-k );
	}
	return 0;
}