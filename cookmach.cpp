#include <iostream>
#include <stdio.h>
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

int cookmach(int a, int b){

	int ans=0;

	if(a==b)
		ans = 0;
	else
		if(a<b){
			
			while(b%a!=0){

				if(a%2==0){
					a = a/2;
					ans++;
				}
				else{
					a = (a-1)/2;
					ans++;
				}
			}

			while(a!=b){
				a = a*2;
				ans++;
			}		
		}
		else{ //a>b
			while(a>b && b%a!=0){
				if(a%2==0){
					a = a/2;
					ans++;
				}
				else{
					a = (a-1)/2;
					ans++;
				}
			}

			if(a>b){
				while(a!=b){
					a = a/2;
					ans++;
				}
			}
			else{
				while(a!=b){
					a = 2*a;
					ans++;
				}
			}

		}
	return ans;
}

int main(){
	int t,a,b,ans=0;
	scanint(t);
	while(t--){
		scanint(a);	scanint(b);
		
	if(a==b)
		ans = 0;
	else
		if(a<b){
			
			while(b%a!=0){

				if(a%2==0){
					a = a/2;
					ans++;
				}
				else{
					a = (a-1)/2;
					ans++;
				}
			}

			while(a!=b){
				a = a*2;
				ans++;
			}		
		}
		else{ //a>b
			while(a>b && b%a!=0){
				if(a%2==0){
					a = a/2;
					ans++;
				}
				else{
					a = (a-1)/2;
					ans++;
				}
			}

			if(a>b){
				while(a!=b){
					a = a/2;
					ans++;
				}
			}
			else{
				while(a!=b){
					a = 2*a;
					ans++;
				}
			}

		}
		cout<<ans<<endl;
		ans=0;
	}
	return 0;
}