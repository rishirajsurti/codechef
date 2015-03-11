#include <vector>
#include <algorithm>
#include <iostream>
#include <cstdio>
#include <cmath>
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

bool compare(vector<int> x, vector<int> y){
	if(x[0] < y[0])
		return true;
	else
		if(x[0]==y[0]){
			if(x[1] > y[1])
				return true;
			else
				return false;
		}
		else
			return false;
}

double sqr(int a){
	return (double)(a*a);
}

int main(){
	int t,n,i,j;
	double dist=0;
	vector< vector<int> > a;
	vector<int> row;
	char c;
	scanint(t);
	while(t--){
		c = gc();
		scanint(n);
		while(n--){
			scanint(i);
			scanint(j);
			row.push_back(i);
			row.push_back(j);
			a.push_back(row);
			row.clear();
		}

		sort(a.begin(),a.end(),compare);
		for(i=0; i<a.size()-1; i++){
			dist+= sqrt(sqr(a[i][0]-a[i+1][0]) + sqr(a[i][1]-a[i+1][1]));
		}
		printf("%.2f\n",dist );
		//cout<<dist<<endl;
		dist=0;
		a.clear();
	}
	return 0;
}
