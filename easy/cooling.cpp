#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main(){
	int t;
	cin>>t;
	int i,n;
	for(i=0;i<t;i++){
		cin>>n;
		vector<int> wpie,wlim;
		int j,k;
		for(j=0;j<n;j++){
			cin>>k;
			wpie.push_back(k);
		}
		for(j=0;j<n;j++){
			cin>>k;
			wlim.push_back(k);
		}
		stable_sort(wpie.begin(),wpie.end());
		stable_sort(wlim.begin(),wlim.end());
		int count=0;
		int m;
		j=0;
		k=0;
		for(m=0;m<n;m++){
		while(wpie[j]>wlim[k])
			k++;
		if(j<n && k<n){
			count++;
			j++;
			k++;
		}
	}
	cout<<count<<endl;
	
}	

	return 0;
}
// 4 7 8 9 16
// 3 8 10 10 14