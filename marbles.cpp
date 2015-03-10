#include <stdio.h>

int gcd(int a, int b){
	if(a%b==0)
		return b;
	else
		return gcd(b,a%b);
}

int main(){
	int T,n,k,i,d,x,y;
	long long result;
	scanf("%d",&T);
	while(T--){
		scanf("%d %d", &n, &k);
		n--;	k--;
		if(n-k < k)
			k = n-k;
		result = 1;
		for(i=0; i<=k; i++){
			x = n-i+1; 	y=i;
			d = gcd(x,y);
			x /= d;
			y /= d;
			result /= y;
			result *=x;
		}
		printf("%lld\n", result);
	}
	return 0;
}