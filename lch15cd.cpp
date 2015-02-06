#include <iostream>
using namespace std;

struct Town_{

};

int Walk(int,int);

int main(){
	int t;
	cin>>t;
	int i,N,D;
	for(i=0; i<t; i++){
		cin>>N;
		cin>>D;
		cout<<Walk(N,D)<<endl;
	}
}
int Walk(int N,int D){
	vector< vector<int> > m;
	vector<int> row;
	
}