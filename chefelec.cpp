#include <bits/stdc++.h>
using namespace std;

#define INF 1e9
typedef vector<int> vi;
typedef pair<int, int> ii;
const int N = 100048;
char g[N];


int main(){
	int t; scanf("%d", &t);
	while(t--){
		vi dist;
		vi x;
		int n; scanf("%d", &n);
		dist.assign(n, INF);
		scanf("%s", g);
		
		x.assign(n, 0);
		for(int i = 0; i < n; i++){
			scanf("%d", &x[i]);
		}

		queue<ii> q;
		for(int i = 0; i < n ; i++){
			if(g[i] == '1'){
				dist[i] = 0;
				q.push(ii(i, dist[i]));
			}
		}

		while(!q.empty()){
			ii v = q.front(); q.pop();
			//printf("Idx %d Dist %d\n", v.first, v.second);

			int n1 = v.first-1;
			int n2 = v.first+1;
			
			if(n1 >= 0 && g[n1] == '0'){
				if(abs(x[n1]-x[v.first]) < dist[n1]){
					dist[n1] = abs(x[n1]-x[v.first]);
					g[n1] = '1';
					q.push(ii(n1, dist[n1]));
				}
			}

			if(n2 < n && g[n2] == '0'){
				if(abs(x[n2]-x[v.first]) < dist[n2]){
					dist[n2] = abs(x[n2]-x[v.first]);
					g[n2] = '1';
					q.push(ii(n2, dist[n2]));
				}
			}
		}

		int ans = 0;
		for(int i = 0; i < n; i++)
			ans += dist[i];
		printf("%d\n", ans);
	}
	return 0;
}