#include <cstdio>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
	int t,n,i,j,k,sum=0;
//	vector<int> a;
	int *a;
	scanf("%d",&t);
	while(t--){
		scanf("%d",&n);
		a = new int[n];
		for(i=0; i<n; i++){
			scanf("%d",&a[i]);
			for(j=i-1; j>=0; j--){
				while(a[i]>a[j])
					[ai]-=a[j];
			}
		}
			/*
		for(i=0; i<n; i++){
			scanf("%d",&k);
			a.push_back(k);
		}

		sort(a.begin(), a.end());
		
		for(i=1; i<n; i++){
			for(j=i-1; j>=0; j--){
				while(a[i]>a[j])
					a[i] = a[i] - a[j];
			}
		}*/

		for(i=0; i<n; i++)
			sum+=a[i];
		printf("%d\n",sum );
		sum=0;
//		a.clear();

	}	
	return 0;
}