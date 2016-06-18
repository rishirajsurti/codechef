#include <bits/stdc++.h>
using namespace std;
//up or right in question coz 11 bottom left, nm right top
//here we ll take right and bottom
typedef unsigned long long llu;

llu moves[5][2] = {
	{0,1}, {0,2}, {1,0}, {2,0}, {3,0}
};

llu m, n;

int win(llu sx, llu sy, int turn){

	if(sx == m && sy == n)
		return (1-turn); // turn loses;

	int ans=0,i;
	for(i=0; i<5; i++){
		llu ni = sx + moves[i][0];
		llu nj = sy + moves[i][1];
		if(ni >= 1 && nj >= 1 && ni <= n && nj <= m)
			ans = ans || (win(ni, nj, 1-turn));
	}
	return ans;
}

int main(){
	int t; scanf("%d", &t);
	while(t--){
		scanf("%llu %llu", &n, &m);
		llu sx, sy;
		sx = sy = 1;
		if(win(1,1,1))
			printf("Tuzik\n");
		else
			printf("Vanya\n");
	}	
	return 0;
}