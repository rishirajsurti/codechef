#include <bits/stdc++.h>
using namespace std;

int main(){
	int n, q; 
	scanf("%d %d", &n, &q);
	vector<int> a(n,0);
	for(int i = 0; i < n; scanf("%d", &a[i++]));

	sort(a.begin(), a.end());
	for(int i = 0; i < q; i++){
		int j;
		scanf("%d", &j);
		if(j <= a[n-1] && j >= a[0])
			printf("Yes\n");
		else
			printf("No\n");
	}
	return 0;
}