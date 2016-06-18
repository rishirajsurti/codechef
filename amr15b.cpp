#include <cstdio>
#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int a[100048];

int calc_gcd(vector<int> subsets){

	if(subsets.size()==1)
		return subsets[0];
	else if (subsets.size()==2)
		return __gcd(subsets[0],subsets[1]);
	else{
		int gcd1, gcd2,i;
		gcd1 = __gcd(subsets[0], subsets[1]);
		for(i=2; i<subsets.size(); i++){
			gcd2 = __gcd(gcd1,subsets[i]);
			gcd1 = gcd2;
		}

		return gcd2;
	}
}
int main(){
	int t;
	scanf("%d",&t);
	while(t--){
		int n;
		scanf("%d", &n);
		int product = 1;
		int i,j,k;
		for(i=0; i<n; i++)
			scanf("%d", &a[i]);

		vector<int> subsets;
		for(i=0; i < (1<<n)-1; i++){//for each subset		
			for(j=0; j<n; j++){
				if(i & (1<<j))
					printf("%d %d\n", i,j);
			}
		}
	}
	return 0;
}