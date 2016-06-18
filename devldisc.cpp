#include <cstdio>
#include <algorithm>
#include <vector>
using namespace std;

typedef unsigned int ui;

//ui a[10000][10000];

int main(){
	int t;
	scanf("%d", &t);
	while(t--){
		ui n,m,k;
		scanf("%u %u %u", &n, &m, &k);
		int grid[n+1][m+1];
		bool heart[n+1][m+1];
		vector<int> h(n);
		int i,j,num =1;
		for(i=1; i<=k)
		for(i=1; i <=n; i++){
			for(j=1; j<=n; j++){
				grid[i][j] = num++;
			}
		}

		
	}
	
	return 0;
}