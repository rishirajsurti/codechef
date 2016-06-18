#include <bits/stdc++.h>
using namespace std;

int main(){
	int t; scanf("%d", &t);
	while(t--){
		int n;
		scanf("%d", &n);
		//printf("Chef\n");
		if(n%6!=0)
			printf("Chef\n");
		else
			printf("Misha\n");
	}
	return 0;
}