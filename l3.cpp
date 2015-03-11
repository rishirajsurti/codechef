#include <vector>
#include <list>
#include <map>
#include <set>
#include <deque>
#include <stack>
#include <bitset>
#include <algorithm>
#include <functional>
#include <numeric>
#include <utility>
#include <sstream>
#include <iostream>
#include <iomanip>
#include <cstdio>
#include <cmath>
#include <cstdlib>
#include <ctime>

#define ALL(x)		x.begin(), x.end()
#define FOR(i,n)	for(i=0; i<(n); ++i)
#define FORV(i,x)	for(i=0; i<x.size(); ++i)
#define FORS(i,x)	for(i=0; i<x.length(); ++i)
#define UMAX(m,x)	if(x>m)	m=x;
#define UMIN(m,x)	if(x<m) m=x;
#define pb			push_back
#define mp			make_pair

using namespace std;
#define MAX 1000005
ull primes[MAX];
ull p;
char mark[MAX];

void calcPrimes(){
	p = 0;
	for(ull i = 2; i*i<MAX; i++){
		if(mark[i])	continue;

		for(ull j= i*i; j<MAX; j+=i)
			mark[j] = 1;
	}
	for(ull i =2; i<MAX; i++)
		if(!mark[i]){
			primes[p]=i; p++;
		}
}

int main(){
	int t;
	char num[20];
	calcPrimes();
	scanf("%d",&t);
	while(t--){
		scanf("%s",num);
		cout<<solve(num)<<endl;
	}
	return 0;
}
