#include <iostream>
#include <cstring>
#include <cassert>
#include <climits>
#include <vector>
#include <cstring>
#include <algorithm>
#include <cstring>
using namespace std;

int ans[9000][200];
char a[250];
long long dist[200][200];
vector<int> treasure;
vector<bool> flag;
int siz;
int mask;

long long best (int cur, int n){
	if(cur == n*n)
		return 0;

	int y = (1<<siz)-1;
	if(treasure.size() == 0 || mask == y)
		return dist[cur][n*n];

	if(ans[mask][cur] != -1)
		return ans[mask][cur];

	long long ret = INT_MAX;
	for(int i = 0; i<siz; i++){
		if(mask & (1<<i))
			continue;
		mask |= (1<<i);
		ret = min( (long long)ret, best(treasure[i],n) + dist[cur][treasure[i])]);
		mask &= (y - (1<<i));
	}
	ans[mask][cur] = ret;
	return ans[mask][cur];
}

int main(){
	int t;
	cin>>t;
	while(t--){
		memset(ans,-1,sizeof(ans));
		treasure.clear();
		int n;
		cin>>n;
		for(int i=1; i<=n*n; i++){
			cin>>a[i];
			if(a[i]=='*')
				treasure.push_back(i);
		}

		siz = treasure.size();
		mask = 0;
		for(int i = 1; i<= n*n; i++){
			for(int j=1; j<=n*n; j++){

				if(i==j)
					dist[i][j] = 0;
				else
					dist[i][j] = INT_MAX;

				if(a[i] == '#' || a[j] == '#')
					continue;

				if( (j==i-1 && (j%n)) || ((j==i+1) && (i%n)) || j==i-n || j==i+n)
					dist[i][j] = 1;

			}
		}

		for(int k = 1; k<= n*n; k++){
			for(int i = 1; i<= n*n; i++)
				for(int j=1; j<=n*n; j++)
					dist[i][j] = min(dist[i][j], dist[i][k] + dist[k][j]);
		
		long long ans = best(1,n);	
		assert(ans>=0);
		if(ans>=INT_MAX)
			cout<<-1<<endl;
		else
			cout<<ans<<endl;
	}
	return 0;
}