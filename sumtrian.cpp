#include <stdio.h>
#include <iostream>
#include <cmath>
using namespace std;
int n;
int a[101][101],sum[101][101];

int solve(){
	int i,j;
	int ret =-1;
	sum[1][1] = a[1][1];

	for(i=2; i<=n; i++){
		for(j=1; j<=i; j++){
			if(j==1)
				sum[i][j] = a[i][j] + sum[i-1][j];
			else{

				sum[i][j] = max(a[i][j]+sum[i-1][j], a[i][j]+sum[i-1][j-1]);
			}
		}
	}
	for(j=1; j<=n; j++)
		ret = max(ret,sum[n][j]);
	return ret;
}
int main(){
	int i,j,t;
	scanf("%d",&t);
	while(t--){
		scanf("%d",&n);
		for(i=1; i<=n; i++)
			for(j=1; j<=i; j++)
				scanf("%d",&a[i][j]);

		cout<<solve()<<endl;
	}
	return 0;
}