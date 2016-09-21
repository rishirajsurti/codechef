#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<ll, ll> ii;
typedef vector<ii> vii;
typedef vector<ll> vi;
vector< vii > adj;

#define INF 1e6

int main(){
	
		ll n, m;
		scanf("%lld %lld", &n, &m);
		adj.assign(n, vii());
		for(ll i = 0; i < m; i++){
			ll u, v, c;
			scanf("%lld %lld %lld", &u, &v, &c);
			--u; --v;
			adj[u].push_back(ii(v, c));
			adj[v].push_back(ii(u, c));
		}

		ll q; scanf("%lld", &q);
		while(q--){
			ll u, v; scanf("%lld %lld", &u, &v);
			--u; --v;
			ll s = u;
			priority_queue<ii, vector<ii>, greater<ii> > q;
			q.push(ii(s, 0));
			vi dist(n, INF);
			dist[s] = 0;
			while(!q.empty()){
				ii f = q.top(); q.pop();
				ll vtx = f.first;
				ll dst = f.second;
				if(dist[vtx] <  dst) continue;
				//if(vtx == v) break;
				for(ll j = 0; j < adj[vtx].size(); j++){
					ii vv = adj[vtx][j];
					if(dist[vtx]+vv.second < dist[vv.first]){
						dist[vv.first] = dist[vtx]+vv.second;
						q.push(ii(vv.first, dist[vv.first]));
					}
				} 
			}
			printf("%lld\n", dist[v]);
		}
	

}