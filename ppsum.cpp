#include <bits/stdc++.h>
using namespace std;

int main(){
	int t;
	scanf("%d", &t);
	while(t--){
		int d, n;
		scanf("%d %d", &d, &n);
		int ans = 0;
		int i,j, newn;
		for(i=0; i<d; i++){
			ans =0;
			for(j=1; j<=n; j++){
				ans+=j;
			}
			n = ans;
		}
		printf("%d\n", ans);
	}
	return 0;
}