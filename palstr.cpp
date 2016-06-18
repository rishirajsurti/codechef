#include <cstdio>
#include <string>
#include <iostream>
#include <cstring>
#include <algorithm>
using namespace std;

bool isPalin(string s){
	int left = 0, right = s.size()-1;
	bool ok = true;
	cout<<"Checking palin "<<s<<endl;
	while(left <=right){
		cout<<left<<" "<<right<<endl;
		cout<<s[left]<<" "<<s[right]<<endl;
		if(s[left] != s[right]){
			ok = false; left++; right--;
			
		}else{
			left++; right--;
		}
	}
	return ok;
}

int main(){
	int t;
	scanf("%d", &t);
	while(t--){
		string a,b,c;
		cin>>a;	//cin.ignore();
		cin>>b; //cin.ignore();
		cin>>c; //cin.ignore();
		
		cout<<a<<" "<<b<<" "<<c<<" "<<endl;
		int u,v,w,x,y,z,i;
		int count = 0;
		for(u=0; u<a.size(); u++){
		for(v=0; v<=u; v++) {// u to v;
		for(w=0; u<b.size(); w++){
		for(x=0; x<=w; x++) {// w tox
		for(y=0; y<c.size(); y++){
		for(z=0; z<=y; z++){

			printf("gone inside\n");
			string sa, sb, sc;
			for(i=u; i<=v; i++)
				sa += a[i];
			for(i=w; i<=x; i++)
				sb += b[i];
			for(i=y; i<=z; i++)
				sc += c[i];
			cout<<sa <<" "<<sb<<" "<<sc<<endl;
			string s = sa+sb+sc;
			if(isPalin(s)){
				cout<<"palin returned "<<isPalin(s)<<endl;
				count++;
			}
			else
				continue;
			//cout<<"palin returned "<<isPalin(s)<<endl;
		}}}}}}
		printf("count %d\n", count);
	}
}