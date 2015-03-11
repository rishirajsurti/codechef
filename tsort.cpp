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
#include <queue>
using namespace std;
int a[1000005];
int main(){
	int n,mx=0,x,i,j,mn=10000000,t;
	scanf("%d",&t);
	while(t--){
		scanf("%d",&x);
		a[x]++;
		mx = max(mx,x);
		mn = min(mn,x);
	}
	for(i=mn; i<=mx; i++)
		for(j=0;j<a[i]; j++)
			printf("%d\n", i);

	return 0;
}