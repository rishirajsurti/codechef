#include <iostream>
#include <cstdio>
#include <vector>
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
int main(){
	int t,n,i,sum=1;
	scanint(t);
	while(t--){
		scanint(i);
		n = i;
		cout<<n<<" "<<i<<endl;
		while(i--){
			i = (int)i;
			n = (int)n;
			if(n%i==0){
				sum+=i;
			}
		}
		cout<<sum<<endl;
		sum=0;
	}
	return 0;
}