#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

void Occ(string s);

int main(){
	int t;
	cin>>t;
	int i;
	string s;
	
	for(i=0; i<t; i++){
		cin>>s;
		Occ(s);
	}
}

void Occ(string s){
	int a[27]={0};
	int l = s.length();
	int i,j;
	int max =0,count=0;
	for(i =0; i<l; i++){
		j=int(s[i])%97;
		a[j]++;
		max = a[j]>max ? a[j]:max;
	}
	count=2*max;

	for(i=0; i<27; i++){
		count=count-a[i];
		}
	if(count==0)
		cout<<"YES"<<endl;
	else
		cout<<"NO"<<endl;

}