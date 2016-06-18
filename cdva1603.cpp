#include <bits/stdc++.h>
using namespace std;

int main(){
	int t; scanf("%d", &t);
	while(t--){
		int n,q;
		scanf("%d %d", &n, &q);
		vector<double> a(n,0);
		int i,j;
		for(i=0; i<n; i++){
			scanf("%lf",&a[i]);
		}
		sort(a.begin(), a.end());
		double k;
/*		for(i=0; i<a.size(); i++)
			printf("%f ",a[i] );
		printf("\n");
*/		for(i=0; i<q; i++){
			scanf("%lf", &k);
			vector<double>::iterator idx = upper_bound(a.begin(), a.end(), k);
//			printf("%f\n", *idx);
			int dist = a.end()-idx;
			printf("%d\n", dist);
		}
	}
	return 0;
}