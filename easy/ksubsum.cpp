#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int start_index=0,end_index=0;
int max_sum=0;
int local_max=0;
int sum=0;
int start=0, end=0;
vector<int> ksubsum;

int n,k1,k2,k3;
void max_subarray(vector<int> a){
	int i,j;
	for(i=0;i<a.size();i++){
		
		for(j=i;j<a.size();j++){
	
			sum+=a[j];
			if(sum>local_max){
				
				start_index=i;
				end_index=j;
				local_max=sum;
			}
		}
		if(local_max>max_sum){
			max_sum=local_max;
			start=start_index;
			end=end_index;
		}
		ksubsum.push_back(local_max);
		sum=0;
		local_max=0;

	}
}



int main(){
	vector<int> a;
//	int ab[]={13,-3, -25, -3, -16, -23, 18, 20, -7, 12, -5, -22, 15, -4, 7};
//	int i;
//	for(i=0;i<15;i++)
//		a.push_back(ab[i]);

//	for(i=0;i<100000;i++){
//		a.push_back(i);
//	}
//	cout<<a.size();
	int t;
	cin>>t;
	int i,j,k;

	for(i=0;i<t;i++){
		cin>>n;
		cin>>k1;
		cin>>k2;
		cin>>k3;
		for(j=0;j<n;j++){
			cin>>k;
			a.push_back(k);
		}
	max_subarray(a);
	stable_sort(ksubsum.begin(),ksubsum.end());
	cout<<ksubsum[ksubsum.size()-k1]<<" "<<ksubsum[ksubsum.size()-k2]<<" "<<ksubsum[ksubsum.size()-k3]<<endl;
	a.clear();
	ksubsum.clear();

	}	

	
	//cout<<"done"<<endl;
	return 0;
}