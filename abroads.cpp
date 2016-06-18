#include <cstdio>
#include <algorithm>
#include <vector>
using namespace std;

typedef vector<int> vi;
typedef pair<int, int> pi;

int pop[];

int vis
int dfs(int u){

	vis[u] = true;
	int ans=pop[u];
	int j,v;
	for(j=0; j<Adjlist[u].size(); j++){
		if(!vis[Adjlist[u][j]]){
			ans += dfs(Adjlist[u][j]);
		}
	}
	return ans;
}

int main(){
	int n,m,q;

}