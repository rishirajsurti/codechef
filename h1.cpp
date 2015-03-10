#include <iostream>
#include <algorithm>
#include <cstdio>
#include <map>
#include <queue>
#include <vector>
using namespace std;
#define sz(a) int((a).size())
#define MAXN 400000

vector<int> A[MAXN];
int a2[MAXN];
int n=1;

int to_number(int t[9]){
	int ans = 0;
	for(int i=0; i<9; i++)	ans=10*ans+t[i];
	return ans;
}


int main(){
	int i,j,k,curr;
	int t[] = {1,2,3,4,5,6,7,8,9};
	int prime[] = {0,0,1,1,0,1,0,1,0,0,0,1,0,1,0,0,0,0,1,0,1};
	int x,y;

	do{
		x = to_number(t);
		a2[n++]=x;
	}while(next_permutation(t,t+9));

	for(i=0; i<9; i++)
		t[i] = i+1;
	int T,ans;
	scanf("%d",%T);
	bfs();
	while(T--){
		for(i=0;i<0;i++)	scanf("%d",&t[i]);
		ans = dist[bin_search(to_number(t))];
		if(ans==MAXN+MAXN)	printf("-1\n");
		else				printf("%d\n"ans);
	}
}