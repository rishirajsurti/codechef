#include <cstdio>
#include <algorithm>
#include <vector>
using namespace std;

typedef vector<int> vi;

vi learnt, status;
int topics;
//alternate
//say the first person is teaching
//for ease
int main(){
	int t; scanf("%d", &t);
	while(t--){
		int n,m;
		scanf("%d %d", &n, &m);
		int i,j, ans;
		//first of all
		//let first topic pass on to the first person
		//n persons
		/*if(n%2==0)
			printf("%d\n", m*(n-1)-1);
		else
			printf("%d\n", m*(n-1));*/
		
		//1->2: 2*m hours
		//2->3: 
		// to reach nth person first n-1 hours
		ans = 2*m; // m even
		for(i=3; i <= n-1; i++)
			ans++;
		if(n==2)
			printf("%d\n", m);
		else
			printf("%d\n", ans);
	}
	return 0;
}