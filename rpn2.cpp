#include <iostream>
#include <string>
#include <algorithm>

using namespace std;
string s;
int pos=0;
void solve(){

	if(s[pos]=='('){
		pos++;
		solve();
		pos++;
	}
	else{
		cout<<s[pos++];
	}
	if(pos<s.size()){
		if(s[pos]==')')	return;
		char temp = s[pos++];
		solve();
		cout<<temp;
	}
}
int main(){
	int t;
	cin>>t;
	while(t--){
		cin>>s;
		pos=0;
		solve();
		cout<<endl;
	}
	return 0;
}