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

bool isPalin(string s){
	int i;
//	cout<<"check palin"<<endl;
	bool r = true;
	for(i=0; i<s.length(); i++){
		if(s[i]!=s[s.length()-i-1])
			r = false;
	}
	return r;
}

int palprob(string s){
	int n = s.length();
	if(n!=0){
	
	n = n/2;

	if(isPalin(s)){
		return (1+ palprob(s.substr(0,n)));
	}
	else
		return 0;
	}
	else
		return 0;
}

int main(){
	int t,i,j,sum;
	string s;
	scanint(t);
	while(t--){

		sum=0;
		cin>>s;

		for(i=0; i<s.length(); i++){
			for(j=0; j<s.length()-i; j++){
				sum+=palprob(s.substr(i,j+1));
			//	cout<<s<<" "<<s.substr(i,j+1)<<" "<<i<<" "<<j<<endl;
			}
		}
		cout<<sum<<endl;
	}
	return 0;
}

