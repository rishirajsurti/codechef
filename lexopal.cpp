#include <bits/stdc++.h>
using namespace std;

int main(){
	int t; scanf("%d", &t);
	while(t--){
		string s;
		cin>>s;
		bool poss = true;
		int i,j;
		i = 0; j = s.length()-1;
		while(i <= j && poss){
			if(i==j){
				s[i] = 'a';
			}
			else if(s[i] == '.' && s[j] != '.'){
				s[i] = s[j];
			}
			else if(s[i] != '.' && s[j]=='.'){
				s[j] = s[i];
			}
			else if(s[i] == s[j]){
				//do nothing
			}
			else if(s[i] != s[j]){
				poss = false; //can't be palin
			}
			i++; j--;
		}

		if(poss) 
			cout<<s<<endl;
		else 
			printf("-1\n");
	}
	return 0;
}