#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;

#define gc getchar_unlocked
void scanint(int &x);

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
	vector<char> P, p1,p2;
	char c, a,b;
	int i,q,l,r, count=0,j,k;
	c = gc();
	P.push_back(c);

	while(c!='\n'){
		P.push_back(c); //vector now starts with 1,2,..
		c = gc();
	}

	scanint(q);
	for(i=0; i<q; i++){
		a = gc();
		b = gc();
		b = gc();
		scanint(l);
		scanint(r);
		vector<char>::iterator it;
		it = find(P.begin()+1, P.end(), a);
		
		cout<<*it<<endl;
 	}
	
	return 0;
}