#include <iostream>
#include <cstring>
#include <cstdio>
#include <cassert>
#include <climits>
#include <vector>
#include <cstring>
#include <algorithm>
#include <cstdio>
using namespace std;

int ans[9000][200];
char a[250];
long long dist[200][200];
vector<int> treasure;
vector<bool> flag;
int siz;
int mask;

long long best(int cur, int n){
	if(cur == n*n) return 0;

	int y = (1<<siz) -1;

	if(treasure.size() == 0 || mask == y)
		return dist[cur][n*n];

	if(ans[mask][cur] != -1)
		return ans[mask][cur];
}
int main(){
	int t; scanf("%d", &t);
	while(t--){
		memset(ans, -1, sizeof ans);
		treasure.clear();
		int n; scanf("%d", &n);

		for(int i = 1; i <= n*n; i++){
			cin>>a[i];
			if(a[i] == '*')
				treasure.push_back(i);
		}

		siz = treasure.size();
		mask = 0;
		for(int i = 1; i <= n*n; i++){
			for(int j = 1; j <= n*n; j++){
				if (i==j)
					dist[i][j] = 0;
				else
					dist[i][j] = INT_MAX;
				if(a[i] == '#' || a[j] == '#')
					continue;

				if((j == i-1 && (j%n)) || (j == i+1 && (i%n)) || j == i-n || j == i+n)
					dist[i][j] = 1;
			}
		}

		for(int k =1; k <= n*n; k++){
			for(int i = 1; i <= n*n; i++){
				for(int j = 1; j <= n*n; j++){
					dist[i][j] = min(dist[i][j], dist[i][k] + dist[k][j]);
				}
			}
		}

		long long ans = best(1, n);
	}
}