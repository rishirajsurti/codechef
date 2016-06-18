#include <bits/stdc++.h>
using namespace std;

typedef unsigned long long ull;
int main(){
	int t; scanf("%d", &t);
	while(t--){
		ull n,i; 
		scanf("%llu", &n);
		ull ans=0;
		int sq = sqrt(n) +1;
		map<ull, ull> m;
				
		for(i=1; i<= sq; i++){
			if(n%i==0){
				if(!m[i]) ans++, m[i] =1;
				if(!m[n/i]) ans++, m[n/i] = 1;
			}
		}
/*		vector<ull> a;
		for(i=1; i<=sq; i++){
			if(n%i == 0){
				if(find(a.begin(), a.end(), i) == a.end())
					a.push_back(i);
				if(find(a.begin(), a.end(), n/i) == a.end())
					a.push_back(n/i);
			}
		}
		ans = a.size();*/

/*		set<ull> s;
		for(i=1; i<=sq; i++){
			if(n%i==0){
				if(s.find(i) == s.end())
					s.insert(i);
				if(s.find(n/i) == s.end())
					s.insert(i);
			}
		}
		ans = s.size();
*/		
		if(ans%2!=0) printf("YES\n");
		else	printf("NO\n");
	}
	return 0;
}