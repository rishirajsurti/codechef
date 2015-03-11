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
vector<int> dist(MAXN, MAXN+MAXN);

int to_number(int t[9]){
	int ans = 0;
	for(int i=0; i<9; i++)	
		ans = 10*ans + t[i];
	return ans;
}

int to_number(vector<int> t){
	int ans = 0;
	for(int i=0; i<9; i++)	
		ans = 10*ans + t[i];
	return ans;
}

int bin_search(int find){

	int lb=1, ub=n-1, mid, flag, loc;
	flag = 1;

	while(lb <=ub && flag){
		mid = (lb+ub)/2;

		if(find > a2[mid])
			lb = mid+1;
		else if(find < a2[mid])
			ub = mid-1;
		else{
			flag = 0;
			loc = mid;
		}
	}

	return loc;
}

void bfs(){
	int prime[] = {0,0,1,1,0,1,0,1,0,0,0,1,0,1,0,0,0,1,0,1};
	int i,j,k,l,x,y,curr,t1;
	vector<int> t;
	queue<int> q;

	dist[1] = 0;
	q.push(1);
	t.resize(9);
	for(i=0; i<9; i++)
		t[i] = i+1;

	while(!q.empty()){
		k = q.front();
		q.pop();
		t1 = a2[k]; // the numbers 124223232, etc.
		for(i=8; i>=0; i--){
			t[i] = t1%10;
			t1/=10;
		}
		// from 1242232  to 1,3,4,5,,6,
		curr = k;

		//vertically adjacent
		for(i=0; i<2; i++){
			for(j=0; j<3; j++){
				x = 3*i + j;
				y = 3*(i+1) +j;
				if(prime[t[x]+t[y]]){
					swap(t[x],t[y]);
					A[curr].push_back(bin_search(to_number(t)));
					swap(t[x],t[y]);

				}				
			}
		}

		for(j=0; j<2; j++){
			for(i=0; i<3; i++){
				x = 3*i + j;
				y = x+1;
				if(prime[t[x]+t[y]]){
					swap(t[x],t[y]);
					A[curr].push_back(bin_search(to_number(t)));
				}
			}
		}

		for(l=0; l<sz(A[k]); l++){
			if(dist[A[k][l]] > dist[k] + 1){
				dist[A[k][l]] = dist[k] + 1;
				q.push(A[k][l]);
			}
		}
	}
}

int main(){
	int i,j,k,curr;
	int t[]={1,2,3,4,5,6,7,8,9};

	int x,y;
	//convert to 123456, 432124,etc.

	do{
		x = to_number(t);
		a2[n++] = x; //store all numbers;
	}while(next_permutation(t,t+9));

	//return to original t 1,2,3,4,
	for(i=0; i<9; i++)
		t[i] = i+1;

	bfs();
	int T, ans;
	scanf("%d", &T);
	while(T--){
		for(i=0; i<9; i++)	scanf("%d",&t[i]);
		ans = dist[bin_search(to_number(t))];
		if(ans == MAXN+MAXN)	printf("-1\n" );
		else					printf("%d\n", ans);
	}
}