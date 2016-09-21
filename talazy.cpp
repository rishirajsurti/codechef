#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
	int t; scanf("%d", &t);
	while(t--){
		ll n, m, b;
		scanf("%lld %lld %lld", &n, &b, &m);
		ll ans = 0;
		while(n){
			if(n&1){
				//n odd;
				ll probs = (n+1)/2;
				ll time = probs * m;
				m = 2*m;
				ans += time;
				n = n- probs;
				if(n > 0) ans += b; //break;
			}	
			else{
				//n even;
				ll probs = n/2;
				ll time = probs *m;
				m = 2*m;
				ans += time;
				n = n/2;
				if(n>0) ans += b; //break;
			}
		}
		printf("%lld\n", ans);
	}
	return 0;
}