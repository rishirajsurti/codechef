#include <iostream>
#include <cstdio>
#include <vector>
#include <algorithm>
using namespace std;
#define gc getchar_unlocked

void scanint(int &x);
void f(void);
int SubStrings(string s,int a, int b);
int CountCharacters(string s, char c);

void scanint(int &x){
	register int c = gc();
	x = 0;
	int neg = 0;
	for(; ((c<48 || c>57) && c!='-'); c = gc());
	if(c=='-'){ neg = 1; c = gc();}
	for(; c>47 && c<58; c=gc()){ x = (x<<1)+(x<<3)+c-48; }
	if(neg)	x=-x;

}

int t,n,k,q,l,r,i,j;
string s;

int main(){
	scanint(t);
	for(i=0; i<t; i++){
		f();
	}
	return 0;
}

void f(void){
	scanint(n);
	scanint(k);
	scanint(q);
	cin>>s;
	for(j=0; j<q; j++){
		scanint(l);
		scanint(r);
		cout<<SubStrings(s,l-1,r-1)<<endl;
	}
	return;
}

int SubStrings(string str,int a, int b){
	int i,j,n=0;
	char o,z;
	o='1';
	z='0';
	for(i=a; i<=b; i++){
		for(j=i; j<=b; j++){
			if( CountCharacters(str.substr(i,j+1),o)<=k && CountCharacters(str.substr(i,j+1),z)<=k)
				n++;
		}
	}
	return n;
}
int CountCharacters(string st, char c){
	int i,sum=0;
	for(i=0; i<st.length(); i++){
		if(st[i]==c)
			sum++;
	}
	return sum;
}