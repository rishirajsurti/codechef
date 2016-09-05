#include <bits/stdc++.h>
using namespace std;

int main(){
	int t; scanf("%d", &t);
	while(t--){
		string s;
		cin>>s;
		//int n = s.length();
		int o=0, z=0, n = s.length();
		for(int i = 0; s[i]; i++){
			if(s[i]=='0') z++;
			else if(s[i]=='1') o++;
		}
		if(o==1 || z==1) printf("Yes\n");
		else printf("No\n");
		/*sort(s.begin(), s.end());
		if(s[0]=='0' && s[1]=='1') printf("Yes\n");
		else if(s[n-2]=='0' && s[n-1]=='1') printf("Yes\n");
		else printf("No\n");*/
	}
	return 0;
}