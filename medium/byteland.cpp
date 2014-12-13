#include<iostream>
#include<cmath>
using namespace std;

unsigned long int maxDollars(unsigned long int n){
	unsigned long int n1,n2,n3;
	n1=(n/2);
	n2=(n/3);
	n3=(n/4);
//	cout<<n1<<" "<<n2<<" "<<n3<<endl;
	
	if((n1+n2+n3)>n)
		return (n1+n2+n3);
	else{
		if(n1!=0)
			n1=maxDollars(n1);
		if(n2!=0)
			n2=maxDollars(n2);
		if(n3!=0)
			n3=maxDollars(n3);
		if((n1+n2+n3)<n)
			return n;
		else
			return (n1+n2+n3);
	}
	
//	return max(n,max(n1,maxDollars(n1))+max(n2,maxDollars(n2))+max(n3,maxDollars(n3)));
}

int main(){
	int i,t;
	cin>>t;
	unsigned long int n;
	if(t<11){
	for(i=0;i<t;i++){
		cin>>n;
		if(n>=0 && n<=1000000000)
			cout<<maxDollars(n)<<endl;;
	}
	}
//	cout<<"done"<<endl;
	return 0;
}