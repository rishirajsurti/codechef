#include <cstdio>
#include <vector>
#include <algorithm>
#include <iostream>
#include <string>

using namespace std;

int a[1001][1001];

int main(){
	int l, r, q;
	char c;
	scanf("%d %d %d\n", &l, &r, &q);
	int i,j;
	for(i=0; i<l; i++){
		for(j=0; j<r; j++){
			scanf("%c", &c);
			if(c == 'M') a[i][j] = 1;
			else if(c=='F') a[i][j] = 0;

			if(i > 0) a[i][j] += a[i-1][j];
			if(j > 0) a[i][j] += a[i][j-1];
			if( i > 0 && j > 0) a[i][j] -= a[i-1][j-1];
		}
		cin.ignore();
	}
	int k,m, i1, j1, ans;

	for(m=0; m<q; m++){
		scanf("%d %c", &k, &c);
		printf("k = %d c = %c\n", k,c);
		k--;
		if(c=='M') ans=1;
		else ans = 0;
		bool ok = false;

		for(i=0; i<l && !ok; i++){
			for(j=0; j<r && !ok; j++){
				for(i1=0; i1<=i && (i-i1)==m && !ok; i1++){
					for(j1=0; j1<=j && (j-j1)==m && !ok; j1++){

						int sum = a[i][j];
						if(i1 > 0) sum -= a[i1-1][j];
						if(j1 > 0) sum -= a[i][j1-1];
						if(i1 > 0 && j1 > 0) sum += a[i1-1][j1-1];

						printf("sum = %d\n", sum);
						if(sum == ans*k*k)
							ok = true;
					}
				}
			}
		}
		if(ok) printf("yes\n");
		else printf("no\n");
	}

	for(i=0; i<l; i++){
		for(j=0; j<r;j++)
			printf("%d", a[i][j]);
		printf("\n");
	}
	return 0;
} 