#include <bits/stdc++.h>
using namespace std;
int main(){
	int t; scanf("%d", &t);
	while(t--){
		int n; scanf("%d", &n);
		vector<int> a(n);
		int i,j,k;
		for(i=0; i<n; i++) scanf("%d", &a[i]);
		scanf("%d", &k);
		int ans = 0;
		for(i=0; i<a.size(); i++){
			for(j=i+1; j<a.size(); j++){
				if(a[i]*a[j] == k) ans++;
			}
		}
		printf("%d\n", ans);
	}
	return 0;
}