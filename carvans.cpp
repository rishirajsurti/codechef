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
	int n,t,i,count=0,speed,prevspeed;
	scanint(t);
	while(t--){
		scanint(n);
		i=0;
		count=0;
		while(i<n){
			scanint(speed);
			if(i==0){
				count++;
				prevspeed = speed;
			}
			else if(speed>prevspeed)
				prevspeed = speed;
			else if(speed < prevspeed){
				count++;
				prevspeed = speed;
				i++;
			}
			
		}
		printf("%d\n",count );
	}
	return 0;
}