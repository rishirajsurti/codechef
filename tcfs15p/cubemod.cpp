#include<iostream>
using namespace std;
int pow(int a,int b);
int cubemod(int a,int b,int c);
int main(){
	int t;
	cin>>t;
	int i,a,b,c;
	for(i=0;i<t;i++){
		cin>>a>>b>>c;
		cout<<cubemod(a,b,c)<<endl;;
	}
}
int pow(int a,int b){
	int i=1,j=0;
	for(j=0;j<b;j++){
		i=(i*a);
	}
	return i;
}
int cubemod(int a,int b,int c){
	int roots=0,i;
	for(i=a;i<=b;i++){
		if((((i*(i+1)+1)%c)==0))
			roots++;
	}
	return roots;
}