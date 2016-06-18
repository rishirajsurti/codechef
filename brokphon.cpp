#include <algorithm>
#include <iostream>
#include <cstdio>
#include <vector>
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

int main(){
	int t,a,n,b,w=0, wn=-1, cn=-1;
	scanint(t);
	while(t--){
		cin>>n;
		cin>>a;
		n--;
		while(n--){
			cin>>b;
			if(a!=b){
				cn = n;
				if(wn!=n+1)
					w += 2;
				else
					w+=1;
				
				wn = n;
			}
			a = b;
		}
		cout<<w<<endl;
		wn=-1;	cn=-1;	w=0;
	}
	return 0;
}