#include <cstdio>
#include <algorithm>
#include <set>
#include <map>
#include <queue>

using namespace std;

int main(){
	int t; scanf("%d", &t);	
	while(t--){
		int n,m; scanf("%d %d", &n, &m);
		int **a = new int*[n];
		int **f = new int*[n];

		int i,j, k,l;
		for(i=0; i<n; i++){
			a[i] = new int[m];
			f[i] = new int[m];
		}
		
		
		for(i=0; i<n; i++){
			for(j=0; j<m; j++){
				scanf("%d", &a[i][j]);
				f[i][j] = 0;
			}
		}
		int ans = -1;
		for(i=0; i<n; i++){
			for(j=0; j<m; j++){
				map<int, int> mp;
				for(k=0; k < m; k++)
					mp[a[i][k]]++;
				for(k=0; k<n; k++)
					mp[a[k][j]]++;
				mp[a[i][j]]--;
				int maxv=-1;
				map<int, int>::iterator it;
				for(it = mp.begin(); it != mp.end(); it++){
					if(it->second > maxv)
						maxv = it->second;
				}
				if(maxv > ans)
					ans = maxv;
				f[i][j] = maxv;
			}
		}
/*		for(i=0; i<n; i++){
			for(j=0; j<m; j++){
				printf("%d ", f[i][j]);
			}
			printf("\n");
		}

*/		
		printf("%d\n", ans);
	}
}