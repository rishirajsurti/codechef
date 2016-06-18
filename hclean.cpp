#include <iostream>
#include <cstdio>
#include <vector>
using namespace std;
#define gc getchar_unlocked
#define push_back pb
void scanint(int &x);

//add following when in windows or codeforces.com
//inline int getchar_unlocked() { return getchar(); }

void scanint(int &x){
	register int c = gc();
	x = 0;
	int neg = 0;
	for(; ((c<48 || c>57) && c!='-'); c = gc());
	if(c=='-'){ neg = 1; c = gc();}
	for(; c>47 && c<58; c=gc()){ x = (x<<1)+(x<<3)+c-48; }
	if(neg)	x=-x;

}

int main(){
	int t,n,d,i,j;
	vector<int> a;
	scanint(t);
	
	while(t--){
		
		scanint(n);	scanint(d);	i=n;
		
		while(i--){
			scanint(j);	a.pb(j);
		}

	}
}