#include <iostream>
#include <vector>
#include <algorithm>
#include <cstdio>
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
int fact(int n);
int main(){
	int t,i,r,b,l,output;
	scanint(t);
	for(i=0; i<t; i++){
		scanint(r);
		scanint(b);
		scanint(l);
		if(r%6!=0 || r%4!=0){
			if(r%10!=0)
				output = 0;
		}
		else{
			if(b==1)
				output = 1;
			else{

				//all fours
				if(r%4 == 0){
					int x,y;
					x = r/4;
					y = b-x;
					
				}

			}

		}

	}
	return 0;
}
int fact(int n){
	if(n<=0)
		return 0;
	int i=1,j;
	for(j=1;j<=n;j++)
		i=i*j;
	return i;
}