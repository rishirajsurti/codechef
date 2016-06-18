#include <iostream>
#include <cstdio>
#include <vector>
#include <algorithm>
using namespace std;
#define gc getchar_unlocked
void scanint(int &x);

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
void InsertionSort(vector<int> a){
	int size = a.size();
	int i,j,k;
	int key;
	int swaps = 0;
	int compares=0;
	for (i=1; i<=size; i++){
	
		
		j=i-1;
		key = a[j];
		while(j>0)
		{
			if(++compares && a[j-1]>key ){
			//a[j] = a[j] + a[j-1];
			//a[j-1] = a[j] - a[j-1];
			//a[j] = a[j] - a[j-1];
			key = a[j-2];
			j--;
			
			swaps++;	
			}
			else
				break;
		}
	}
	//for(j=0; j<size; j++)
	//	cout<<a[j]<<" ";
	//cout<<(compares)<<" "<<swaps<<" "<<(compares-swaps)<<endl;
	cout<<(compares-swaps)<<endl;
	//return a;
}

int main(){
	int t,n,i;
	vector<int> a;
	scanint(t);
	while(t--){
		a.clear();
		scanint(n);
		while(n--){
			scanint(i);
			a.push_back(i);
		}
		InsertionSort(a);
	}
	return 0;	
}
