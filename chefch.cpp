#include <iostream>
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
int main(){
	int t,i,count=0,sum=0;
	scanint(t);
	char c;

	for(i=0; i<t; i++){
		c = gc();
		while(c!='\n'){
			if(c=='+'){
				c = gc();
				while(c!='\n' && c!='-'){
					count++;
					c = gc();
				}
				count++;
				sum+=(count/2);
				count=0;
			}
			else if(c=='-'){
				c = gc();
				while(c!='\n' && c!='+'){
					count++;
					c = gc();
				}
				count++;
				sum+=(count/2);
				count=0;
			}
		}
		printf("%d\n",sum );
		sum=0;
	
	}

	return 0;
}