#include <bits/stdc++.h>
using namespace std;



int main(){
	int t; scanf("%d", &t);
	while(t--){
		int n,k; scanf("%d %d", &n, &k);
		vector< vector<int> > adj;
		adj.assign(n, vector<int>());
		int i,j,x,y;
		for(i=0; i<k; i++){
			scanf("%d %d", &x, &y);
			--x; --y;
			if(find(adj[x].begin(), adj[x].end(), y) == adj[x].end())
				adj[x].push_back(y);
		}
		vector<int> dfs_num(n,0), visited(n,0);
		bool loop = false;
		queue<int> q;
		q.push(0);
		visited[0] = 1;

		while(!q.empty() && !loop){
			int u = q.front(); q.pop();
			for(i=0; i<adj[u].size(); i++){
				int v = adj[u][i];
				if(visited[v]){
					loop = true; break;
				} else{
					visited[v] = 1;
					q.push(v);
				}
			}
		}
		if(loop) printf("YES\n");
		else	printf("NO\n");

	}
	return 0;
}