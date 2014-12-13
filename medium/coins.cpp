#include<iostream>
#include<vector>
using namespace std;

long long int coins(long long int n){
	if(n<12)
		return n;
	else{
		long long int n1,n2,n3;
		n1=n/2;
		n2=n/3;
		n3=n/4;
		n1=max(n1,coins(n1));
		n2=max(n2,coins(n2));
		n3=max(n3,coins(n3));
		if(n1>(n1+n2+n3)){
			return n;
		}	
		else
			return (n1+n2+n3);
	}


}
int main(){
	long long int n;
	while(cin>>n){
		cout<<coins(n)<<endl;
	}
	return 0;
}