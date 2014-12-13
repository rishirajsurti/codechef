#include<iostream>
#include<vector>
using namespace std;

int main(){
	int t;
	int i,j,k;
	int n;
	int minp,minw,maxp,maxw;
	vector<int> p,w;
	cin>>t;
	for(i=0;i<t;i++){
		cin>>n;
		for(j=0;j<n;j++){
			cin>>k;
			p.push_back(k);
		}
		for(j=0;j<n;j++){
			cin>>k;
			w.push_back(k);
		}

		
	}
	cout<<"done"<<endl;
	return 0;
}