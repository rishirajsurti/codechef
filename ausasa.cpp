#include <cstdio>
#include <algorithm>
#include <vector>
using namespace std;

int main(){
	int TC;
	scanf("%d", &TC);
	while(TC--){
		int n,k;
		
		scanf("%d %d", &n, &k);
		vector<int> a(n,0);
		int i,j;
		for(i=0; i<n; i++)
			scanf("%d", &a[i]);
		for(i=0; i<k; i++)
			next_permutation(a.begin(), a.end());

		for(i=0; i<n; i++){
			if(i > 0)
				printf(" ");
			printf("%d", a[i]);
		}
	}
	return 0;
}