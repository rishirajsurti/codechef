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
int Mod(int a, int b);
int getMode(vector<int> a);
int main(){
	int t,n,i,j,k,mode,sum=0,l;
	scanint(t);
	vector<int> a;

	for(i=0; i<t; i++){
		scanint(n);	
		for(j=0; j<n; j++){
			scanint(k);
			a.push_back(k);
		}
		sort(a.begin(),a.end());
		mode = getMode(a);
		for(j=0;j<n; j++){
			if(a[j]!=mode)
				sum++;
		}
		printf("%d\n",sum );
		sum =0;
		a.clear();
	}
}

int getMode(vector<int> a){
	int count=0, max = 0, i,value=a[0];
	for(i=0; i<a.size()-1; i++){
		if(a[i]==a[i+1]){
			count++;
			if(count>max){
				max = count;
				value = a[i];
				}
		}
		else
			count = 0;
	}
	return value;
}
int Mod(int a, int b){
	return (a>b ? (a-b):(b-a));
}