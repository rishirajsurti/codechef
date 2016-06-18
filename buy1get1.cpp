#include <cstdio>
#include <string>
#include <iostream>
#include <algorithm>
using namespace std;

int main(){
	string s;
	int *a;
	int t, cost=0;
	scanf("%d",&t);
	while(t--){
		cin>>s;
		a = new int[s.length()];
		for(int i=0; i<s.length(); i++)
			a[i] = (int)s[i];

		sort(a, a+s.length());
		for(int i=0; i<s.length(); ){
			if(a[i] == a[i+1]){
				cost++;
				i = i+2;
			}
			else{
				cost++;
				i++;
			}
		}
		printf("%d\n",cost );
		cost=0;
	}
}