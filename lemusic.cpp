#include <iostream>
#include <cstdio>
#include <vector>
#include <algorithm>
#include <cstdlib>
using namespace std;
#define gc getchar_unlocked
void scanint(int &x);
bool sort_method(vector<int> a, vector<int> b);
//add following when in windows or codeforces.com
//inline int getchar_unlocked() { return getchar(); }

void scanint(int &x){
	register int c = gc();
	x = 0;
	int neg = 0;
	for(; ((c<48 || c>57) && c!='-'); c = gc());
	if(c=='-'){ neg = 1; c = gc();}
	for(; c>47 && c<58; c=gc()){ x = (x<<1)+(x<<3)+c-48; }
	if(neg)	x=-x;

}
bool sort_method(vector<int> a, vector<int> b){
	if(a[0]<b[0])
		return 1;
	else
		return 0;
}
int main(){
	int t,i,j,n,k,l;
	vector< vector<int> > s;
	vector<int> item,l;
	scanint(t);
	for(i=0; i<t; i++){
		scanint(n);
		for(j=0; j<n; j++){
			scanint(k);
			scanint(l);
			item.push_back(l);
			item.push_back(k);
			s.push_back(item);
			item.clear();
		}
	}

//	for(i=0; i<s.size(); i++){
//		if(s[i])
//	}

	//for(i=0; i<s.size();i++)
	//	cout<<s[i][0]<<" "<<s[i][1]<<endl;
	sort(s.begin(),s.end(),sort_method);
}