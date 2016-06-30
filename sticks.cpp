#include <bits/stdc++.h>
using namespace std;
typedef unsigned long long llu;
int main(){
	llu t; scanf("%llu", &t);
	while(t--){
		llu n; scanf("%llu", &n);
		vector<llu> a(n);
		map<llu, llu> m;
		priority_queue<llu> pq;
		llu ans = 0;

		for(llu i = 0; i < n; i++){
			llu u; scanf("%llu", &u);
			m[u]++;
			if(m[u] >= 2)
				pq.push(u);
		}
		
		if(pq.empty()){
			printf("-1\n");
		}
		else{
		
			llu u = pq.top();
			if(m[u] == 4) 
				ans = u*u;
			else{
				ans = u;
				pq.pop();
				if(pq.empty()) ans = -1;
				else ans = ans * pq.top();
			}

			printf("%llu\n", ans);
		}
	}
	return 0;
}