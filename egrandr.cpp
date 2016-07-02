#include <bits/stdc++.h>
using namespace std;

typedef unsigned long long llu;

int main(){
	llu t; scanf("%llu", &t);
	while(t--){
		llu n; scanf("%llu",&n);
		llu sum = 0;
		llu u;
		bool two = false, five = false;
		for(llu i = 0; i < n; i++){
			scanf("%llu", &u);
			if(u == 2) two = true;
			if(u == 5) five = true;
			sum += u;
		}

		llu avg = (sum / n);

		if(!two && five){
			if(avg >= 4)
				printf("Yes\n");
			else
				printf("No\n");
		}
		else{
			printf("No\n");
		}
	}
	return 0;
}