#include <iostream>
#include <cstdio>
#include <string>
#include <algorithm>
#include <cstring>
using namespace std;

int main(){
	int TC,i;
	scanf("%d\n", &TC);
	for(i=1; i<=TC; i++){
		char S[100048], s[100048];

		cin.getline(S, 100048);
		cin.getline(s, 100048);

		int j=0, count = 0, k;
		while(S[j] != '\0'){
			k = 0;
			bool isSubset = true;
			while(S[j+k]!='\0' && s[k] != '\0'){
				if(S[j+k]!=' ' && S[j+k]!=s[k]){
					isSubset = false;
					break;
				}
				else 
					k++;
			}
			if(isSubset && s[k] == '\0')
				count++;
			j++;
		}
	
		printf("Case %d:%d\n",i, count );
	}
}