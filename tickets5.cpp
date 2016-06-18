#include <iostream>
#include <string>
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
	//ios_base::sync_with_stdio(false);
	int t,i;
	scanint(t);
	string s;
	bool f;

	while(t--){
		
		cin>>s;
		f = true;
		

		if(s.length()>=4){

		for(i=2;i<s.length(); i++)
			if(s[i]!=s[i-2])
				f = false;
		
		if(s[0]==s[1])
			f = false;
		}

		else{
			if(s.length()==2){
				if(s[0]==s[1])
					f = false;
			}
			else{ 
				if(s.length()==3){
					if(s[0]==s[2] && s[1]!=s[0])
						f = true;
					else
						f = false;
				}

			}
		}

		if(f)
			cout<<"YES"<<endl;
		else
			cout<<"NO"<<endl;
	}
	return 0;
}