#include <string>
#include <cstdio>
#include <iostream>
#include <cstring>
#include <cstdlib>
using namespace std;

int a[1505][1505];

int main(){
	int n,m;
	scanf("%d %d", &n, &m);
	memset(a, 0, sizeof 0);
	char s[1505];
	for(int i = 0; i < n; i++){
		scanf("%s", s);
		for(int j = 0; j < m; j++){
			a[i][j] = s[j]-'0';
			if(i > 0) a[i][j] += a[i-1][j];
			if(j > 0) a[i][j] += a[i][j-1];
			if(i > 0 && j > 0) a[i][j] -= a[i-1][j-1];
		}
	}
	/*	for(int i = 0; i< n; i++){
		for(int j = 0; j < m ; j++)
			printf("%d ", a[i][j]);
		printf("\n");
	}*/

	int i, j, k, l;
	int ans = 0;
	int running_sum = 0;

	for(k = 0; k < n; k++)
	for(l = 0; l < m; l++)
	for(i = 0; i <=k; i++)
	for(j = 0; j <=l; j++){
		running_sum = a[k][l];
		if(i > 0) running_sum -= a[i-1][l];
		if(j > 0) running_sum -= a[k][j-1];
		if(i > 0 && j > 0) running_sum += a[i-1][j-1];
		if(running_sum%2 == 0)
			ans++;
	}
	printf("%d\n", ans);
	return 0;
}