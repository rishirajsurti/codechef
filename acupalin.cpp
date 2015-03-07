#include <iostream>
#include <string>
using namespace std;
string MaxPalin(string s, int length);
int main(){
	int t,i,j,max=0,l,len=0,index;
	string s;

	cin>>t;
	for(i=0;i<t;i++){
		cin>>s;
//		cout<<s.substr(0,s.length())<<endl;
//		cout<<s[3]<<endl;
		l = s.length();
		for(j=0; j<=l/2;j++){

			if(s[j]==s[l-j-1]){
				l++;
				if(l>max)
					max = l;
					index = j- (l/2);
			}
			else{
				l=0;
				//index = j;
			}
		}
		index = (l/2)-max;
		for(j=index; j<=l-index; j++)
			cout<<s[j];
		cout<<endl;	
	}
}