#include <iostream>
#include <cstdio>
using namespace std;
#define gc getchar_unlocked
void scanint(long long int &x);


void scanint(long long int &x){
	register long long int c = gc();
	x = 0;
	int neg = 0;
	for(; ((c<48 || c>57) && c!='-'); c = gc());
	if(c=='-'){ neg = 1; c = gc();}
	for(; c>47 && c<58; c=gc()){ x = (x<<1)+(x<<3)+c-48; }
	if(neg)	x=-x;

}
long long int factorial(long long int n){
	if(n==1)
		return 1;
	else
		return n*factorial(n-1);
}
int main(){
	long long int n,i,j;
	scanint(n);
	while(n--){
		scanint(i);
		cout<<factorial(i)<<endl;
	}
	return 0;
}
