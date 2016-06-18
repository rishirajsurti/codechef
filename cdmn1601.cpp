#include <bits/stdc++.h>
using namespace std;

int main(){
	int t; scanf("%d", &t);
	while(t--){
		int n; scanf("%d", &n);
		vector<int> a(2*n, 0);
		int i,j;
		for(i=0; i<2*n; i++)
			scanf("%d", &a[i]);
		int ans=0;
		sort(a.begin(), a.end());
		int duels;
		i=0;
		j= 2*n-1;
		/*for(duels = 0 ; duels < n ; duels++){
			if(a[j] > a[i]){
				a[j] = a[j] - a[i];
				a[i] = 0; // dead; 
				i++;
			} else if(a[j] < a[i]){
				a[i] = a[i] - a[j];
				a[j] = 0; //dead;
				j--; 
			} else if(a[j] == a[i]){
				a[j] = a[i] = 0;
				i++; j--;
			}
		}*/

		for(i=0; i<a.size(); i++)
			ans+=a[i];
		printf("%d\n", ans);
	}
	return 0;
}