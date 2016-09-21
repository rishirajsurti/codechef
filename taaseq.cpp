#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
#define INF 1e9

bool isAp(vector<int> b){
	// printf("b vector:\n");
	// for(int i =0 ; i < b.size(); i++) printf("%d ", b[i]);
	// printf("\n");
	if(b.size()==1 || b.empty() || b.size()==2) return true;
	for(int i = 1; i <b.size()-1; i++){
		if((b[i]-b[i-1]) != (b[i+1]-b[i])) return false;
	}
	return true;
}

int main(){
	int t; scanf("%d", &t);
	while(t--){
		int n; scanf("%d", &n);
		vector<ll> a(n);
		for(int i = 0; i < n; scanf("%lld", &a[i++]));
		int inequalities = 0;

		//max 3 inequalites allowed
		ll ans = INF;
		map<int, int> m;
		for(int i = 1; i < n-1; i++)
			++m[(a[i+1]-a[i])];
		map<int, int>::iterator it = max_element(m.begin(), m.end());
		int diff = it->second;

		if(n > 2){
			for(int i = 1; i < n-1; i++){
		//		int d1, d2, d3;
		//		d1 = a[i]-a[i-1];
		//		d2 = a[i+1] - a[i];
				//if(i+2 < n) d3 = a[i+2] - a[i+1];
				if( a[i]-a[i-1] != diff){
				//	printf("%d\n", a[i]);
					vector<int> b(a.begin(), a.end());
					b.erase(b.begin()+i);
					if(isAp(b)){
						ans = min(ans, a[i]);
					}
				}
				
			}
		}
		if(n==1) printf("-1\n");
		else if(n==2) printf("%lld\n", min(a[0], a[1]));
		else printf("%lld\n", ans==INF ? -1 : ans);
	}
	return 0;
}