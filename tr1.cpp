#include <iostream>
#include <cstdio>
#include <algorithm>
#include <vector>
#include <cstring>
using namespace std;
#define pb push_back
#define MOD 100000007

vector< vector<int> > adj;
int ans[10005];
int vis[10005];
int imp[10005];

int dist(int i){
	
}
int main(){
	int t;
	cin>>t;
	while(t--){
		int n,a,b;
		cin>>n;
		adj.clear();
		adj.resize(n);

		for(int i = 1; i<n; i++){
			scanf("%d %d", &a, %b);
			adj[a-1].pb(b-1);
			adj[b-1].pb(a-1);
		}
		memset(ans, -1, sizeof(ans));
		memset(vis, -1, sizeof(vis));
		memset(imp, -1,	sizeof(imp));
		vis[0] = 1;
		ans[0] = dist(0);

	}
}