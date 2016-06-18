#include <bits/stdc++.h>
using namespace std;

int main(){
	int t; scanf("%d" ,&t);
	while(t--){
		string s;
		int ans;
		cin>>s;
		int i,j;
		set<int> st;

		if(s.size() > 1)
		{
		if(s[0]!=s[1]) st.insert(0);

		for(i=1; i<s.size()-1; i++){
			if(s[i]!=s[i-1] && s[i]!=s[i+1])
				st.insert(i);
		}
		i = s.size()-1;
		if(s[i] != s[i-1])
			st.insert(i);
		}
		else{
			st.insert(0);
		}
		//printf("%d\n", st.size());
		printf("%.0lf\n", pow(2,(double)st.size()));
	}
	return 0;
}