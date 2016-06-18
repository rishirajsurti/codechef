#include <bits/stdc++.h>
using namespace std;

typedef unsigned long long ull;

int main(){
	int t; scanf("%d", &t);
	while(t--){
		ull n,k,i,j;
		vector<ull> a(n), b(n), c(n);
		for(i=0; i<n; i++) scanf("%d", &a[i]);
		for(i=0; i<n; i++){
			scanf("%d", &b[i]);
			c[i] = a[i]*b[i];
		}
	}
}