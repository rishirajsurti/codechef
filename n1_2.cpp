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
using namespace std;

typedef long long ll;
typedef unsigned long long ull;
typedef vector<int> VI;
typedef pair<int,int> PI;
typedef vector<pair<int,int> > VPI;
typedef vector<string> VS;

#define ST first
#define ND second
#define ALL(x)      x.begin(), x.end()
#define FOR(i,n)    for(i=0;i<(n);++i)
#define FORV(i,x)   for(i=0;i<x.size();++i)
#define FORS(i,x)   for(i=0;i<x.length();++i)
#define PB          push_back
#define MP          make_pair

int treasures, last, target;
char maze[30][30];
bool visited[30][30];
int dist[20][20], cx[20], cy[20], n, code[30][30], ind[30][30], dp[10000][20], rec;

int solve(){
	int i,j;
	rec = 0;
	treasures = target = 0;

	for(i=0; i<n; i++){
		for(j=0; j<n; j++){
			code[i][j]=ind[i][j] = 0;
			if(maze[i][j] == '*'){
				treasures++;
				cx[treasures] = i;
				cy[treasures] = j;

				code[i][j]= (1<<(treasures-1));
				target|=code[i][j];
				ind[i][j] = treasures;
			}
		}
	}
}

int main(){
	int t,i;
	scanf("%d",&t);
	while(t--){
		scanf("%d", &n);
		gets(maze[0]);
		for(i=0; i<n; i++)
			gets(maze[i]);
		printf("%d\n", solve());
	}
	return 0;
}