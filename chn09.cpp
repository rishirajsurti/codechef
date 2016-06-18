#include <cstdio>
#include <string>
#include <algorithm>
#include <iostream>
using namespace std;

int main(){
	int t;
	scanf("%d", &t);
	while(t--){
		string s;
		int a=0, b=0;
		cin>>s;
		int i;
		for(i=0; i<s.size(); i++){
			if(s[i] == 'a') a++;
			else b++;
		}
		printf("%d\n", min(a,b));
	}
	return 0;
}