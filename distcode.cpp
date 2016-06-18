#include <cstdio>
#include <set>
#include <string>
#include <iostream>
#include <algorithm>
using namespace std;
int main(){
	int t; scanf("%d", &t);
	while(t--){
		string input;
		cin>>input;
//		cout<<input<<endl;;
		set<string> s;
		string subset;
		int ans=0;
		int i;
		for(i=0; i<input.size()-1; i++){
			subset = input.substr(i,2);
//			cout<<subset<<endl;
			if(s.find(subset)==s.end()){
				s.insert(subset); ans++;
				//cout<<subset<<endl;
			}
		}
		printf("%lu\n", s.size());
	}
	return 0;
}