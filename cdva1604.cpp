#include <cstdio>
#include <queue>
#include <algorithm>
#include <cmath>
using namespace std;

//#define nearestPowerOfTwo(S) ((int)pow(2.0, (int) (log((double)S)/log(2.0) + 0.5) ))
int a[10000000];
int left, right;
int main(){
	int t; scanf("%d", &t);
	while(t--){
		int i,p;
		queue<int> q;
		int n;
		scanf("%d", &n);
		
		for(i=1; i<=n; i++){
			a[i] = i;
		}
	}
	return 0;
}

/*		int ans = nearestPowerOfTwo(n);
		
		if(ans > n) ans = ans/2;
		printf("%d %d\n", n, ans);
*//*		for(i=1; i<=n; i++)
			a[i] = i;
		left = 1; right = n;

		int count;
		for(count = 1; count<=n-1; count++){
			//kill
			left++;
			//run;
			a[++right] = a[left];
			//disappear
			left++;
		}
		printf("%d\n", a[right]);
*/		/*for(i=1; i<=n; i++)
			q.push(i);

		while(q.size()!=1){
			q.pop();
			q.push(q.front());
			q.pop();
		}
		printf("%d\n", q.front());
		q.pop();*/
