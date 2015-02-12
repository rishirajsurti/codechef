#include <iostream>
#include <cstdio>
#include <vector>
#include <algorithm>
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
int findOp(vector<int> r);
int main(){
	int t,n,s,i,j,l,k,r=1;
	vector<int> r1,r2;
	scanint(t);
	for(i=0; i<t; i++){
		scanint(n);
		scanint(s);
		for(j=0;j<n; j++)
			r1.push_back(1);
		s = s-n;
		
		k=1;
		while(s>0 && k<n){
		
		for(j=k;j<n;j++){
			if(s>0){
				r1[j]++;
				s--;
				}
			}
		k++;
		}
		if(k>=n){
			r1[r1.size()-2] += s;
		}
		sort(r1.begin(),r1.end());
		for(j=0;j<r1.size();j++)
			cout<<r1[j]<<endl;
//		printf("%d\n",findOp(r1) );	
		r1.clear();
	}
	return 0;
}
int findOp(vector<int> r){
	int i,n=0;
	for(i=0;i<r.size()-1;i++){
		if(r[i+1]-r[i]!=1){
			n++;
			r[i+1] = r[i]+1;
		}
	}
	return n;
}