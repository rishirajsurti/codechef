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

typedef long long ll;
typedef unsigned long long ull;
typedef long double ld;

#define ALL(x)		x.begin(), x.end()
#define FOR(i,n)	for(i=0; i<(n); ++i)
#define FORV(i,x)	for(i=0; i<x.size(); ++i)
#define FORS(i,x)	for(i=0; i<x.length(); ++i)
#define UMAX(m,x)	if(x>m)	m=x;
#define UMIN(m,x)	if(x<m) m=x;
#define pb			push_back
#define mp			make_pair

using namespace std;
int pos;
string expr;

void solve(){
	if(expr[pos]=='('){
		++pos;
		solve();
		++pos;
	}
	else{
		cout<<expr[pos];
		++pos;
	}
	if(pos < expr.size()){
		if(expr[pos]==')')	return;
		char temp = expr[pos++];
		solve();
		cout<<temp;
	}
}

int main(){
	int n,i;
	cin>>n;
	for(i=0; i<n; ++i){
		cin>>expr;
		pos=0;
		solve();
		cout<<endl;
	}
	return 0;
}