#include <cstdio>
#include <vector>
#include <algorithm>
using namespace std;

long long unsigned t;

int main(){
	scanf("%llu\n", &t);
	while(t--){
		long long unsigned n,t;
		long long unsigned a[60000];
		scanf("%llu\n", &n);
		for(int i=0; i<n; i++)
			scanf("%llu", &a[i]);

		sort(a, a+n);
		long long unsigned steps = 0;
		long long unsigned left = 0, right = n-1;
		while(left <= right){
			//printf("%d %d %d %d %d\n", left, right, a[left],a[right],steps);
			if(left == right){
				steps+=1;
				left++;
			}else if(a[left]!=a[right]){
				steps+=1;
				left++; right--;
			}
			else if(a[left] == a[right]){
				steps+=1;
				left++;
			}
		}
		printf("%llu\n",steps );
	}
	return 0;
}
