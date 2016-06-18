#include <bits/stdc++.h>
using namespace std;

int main(){
	int t; scanf("%d", &t);
	while(t--){
		string a,b;
		cin>>a;
		cin>>b;
		int i,j;
		map<char, int> m;
		for(i=0; i<a.size(); i++){
			++m[a[i]];
		}

		bool ok = false;
		for(i=0; i<b.size() && !ok; i++){
			if(m[b[i]] > 0) ok = true;
		}
		if(ok) printf("Yes\n");
		else	printf("No\n");
	}
	return 0;
}