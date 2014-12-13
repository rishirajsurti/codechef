#include<iostream>
using namespace std;
int main(){
	int i,t;
	int n,k,x,j;
	int count=0;
	cin>>t;

	if(t<=10 && t>=1){
	for(i=0;i<t;i++){
		cin>>n;
		if(n<=50 && n>=1){
		cin>>k;
		if(k>=0 && k<=n){
		for(j=0;j<n;j++){
			cin>>x;
			if(x>=1 && x<=100){
			if(x%2==0){
				count++;
			}		
			else{
				count=0;
			}
			if(count==k){
				cout<<"YES"<<endl;
				break;
			}
			
		}
		if(count!=k)
			cout<<"NO"<<endl;
		count=0;
	}
	}
	}
	}
	}

	cout<<"done"<<endl;
	return 0;
}