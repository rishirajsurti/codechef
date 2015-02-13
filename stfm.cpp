#include <iostream>
#include <cstdio>
#include <vector>
#include <algorithm>
using namespace std;
#define gc getchar_unlocked

void scanint(int &x);
int fact(int n);

int F(int n);

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
	int n,m,i,j,sum=0,sum1=0,prod=1;
	scanint(n);
	scanint(m);
	vector<int> a;
	for(i=0; i<n; i++){
		scanint(j);
		a.push_back(j);
	}
	sort(a.begin(),a.end());
	n=1;
	j=1;
	for(i=0; i<a.size(); i++){
		sum += (a[i]*a[i]*(1+a[i])/2);
		
		while(n<=a[i]){
			sum1 += n*prod;
			n++;
			prod = prod*n;
		}
		sum +=sum1;
//		sum = (sum%m);
	}
	printf("%d\n", sum%m);
	
}
