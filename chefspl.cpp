#include <bits/stdc++.h>
using namespace std;

int main(){
	int t; scanf("%d", &t);
	while(t--){
		string s;
		cin>>s;
		int i;
		map<char,int> m;
		int count = 0;
		
		for(i=0; i<s.size(); i++){ 
			++m[s[i]];
			
		}
		map<char, int>::iterator it;
		bool ok = true;
		
		if(ok) printf("YES\n");
		else	printf("NO\n");
	}
	return 0;
}