#include <iostream>
#include <cstdio>
#include <vector>
#include <algorithm>
using namespace std;
#define gc getchar_unlocked
void scanint(int &x);
void f(void);

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
	int t,i;
	scanint(t);
	
	for(i=0; i<t; i++){
		f();
	}
	
	return 0;
}
void f(void){
		
		int x,y,k,n,j,p,c;
		bool found=false;
		scanint(x); //required pages
		scanint(y);	//remaining pages
		scanint(k);	//money left
		scanint(n);	//number of books
		if(x<=y){
			//printf("LuckyChef\n");
			cout<<"LuckyChef"<<endl;
			found = true;
		}
		else{

		for(j=0; j<n; j++){
			scanint(p);
			scanint(c);
			if(p>=(x-y) && c<=k){
//				printf("LuckyChef\n");
				//cout<<"LuckyChef"<<endl;
	//			return;
				found = true;
				}
			}

		}
		if(found == true)
			printf("LuckyChef\n");
		else
			cout<<"UnluckyChef"<<endl;
		
		return;
}