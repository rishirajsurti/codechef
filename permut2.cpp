#include <iostream>
#include <cstdio>
#include <vector>
#include <algorithm>
using namespace std;
#define gc getchar_unlocked
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
int a[100005];
int main(){
	int n,i,j;
	bool ambi=true;
	scanint(n);
	
	while(n!=0){
	
	i=1;
	while(i<=n){
		scanint(a[i]);
		i++;
	}
	i=1;
	while(i<=n){
		if(i != a[a[i]]){
			ambi = false;
			break;
		}
		i++;
	}
	if(ambi)
		printf("ambiguous\n");
	else
		printf("not ambiguous\n");

	
	scanint(n);
	ambi = true;
	}
}