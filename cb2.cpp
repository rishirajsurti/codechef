#include <cstdio>
#include <algorithm>

using namespace std;

int main(){
	int t,n,i,j;
	int *a,*b;
	scanf("%d",&t);
	while(t--){
		scanf("%d",&n);
		a = new int[n];
		b = new int[n];
		for(i=0; i<n; i++){
			scanf("%d",&a[i]);
			b[i] = a[i];
		}
		sort(a, a+n);
		reverse(a, a+n);
		sort(b, b+n);

		if(n%2!=0){
			for(i=0; i<n/2; i++)
				printf("%d %d ",a[i], b[i] );
			printf("%d ",a[i] );
		}
		else{
			for(i=0; i<n/2; i++)
				printf("%d %d ",a[i], b[i] );
		}
		printf("\n");

		
	}
	return 0 ;
		
}