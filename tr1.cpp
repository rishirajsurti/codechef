#include <iostream>
#include <cstdio>
#include <algorithm>
#include <vector>
#include <cstring>
using namespace std;

#define push_back pb
#define MOD 1000000007

int ans[10005];
int vis[10005];
int imp[10005];
vector< vector<int> > adj;

int dist(int i){
	if(ans[i]!=-1)
		return ans[i];
	int ret=0;
	for(int j=0; j<adj[i].size(); j++){
		if(vis[adj[i][j]] == -1){
			vis[adj[i][j]] = 1;
			ret += (1+dist(adj[i][j]));
		}
	}
	return ans[i]=ret;
}

void dfs(int i){
	imp[i] = 0;
	for(int j=0; j<adj[i].size(); j++){
		if(vis[adj[i][j]] == -1){
			vis[adj[i][j]] = 1;
			imp[i] += (ans[adj[i][j]]+1) * (ans[i] -1 -ans[adj[i][j]]);

		}
	}
}

int main(){
	int t;
	cin>>t;
	while(t--){
		int n,a,b;
		cin>>n;
		adj.clear();
		adj.resize(n);
		for(int i=1; i<n; i++){
			scanf("%d %d", &a, &b);
			adj[a-1].pb(b-1);
			adj[b-1].pb(a-1);
		}
		memset(ans, -1, sizeof(ans));
		memset(vis, -1, sizeof(vis));
		memset(imp, -1, sizeof(imp));
		vis[0] = 1;
		ans[0] = dist(0);
		memset(vis, -1, sizeof(vis));
		vis[0] = 1;
		dfs(0);
	}
}