#include <bits/stdc++.h>
using namespace std;

bool isValid(vector<char> &a){
	int open=0, close= 0;
	bool ok=true;
	int i;
	for(i=0; i<a.size() && ok; i++){
		
		if(a[i] == '(') open++;
		else if(a[i] == ')') close++;
		
		if(close > open) ok = false;
		//printf("%c %d %d\n", a[i], open, close);
	}
	return ok;
}
int main(){
	
	char o = '(', c = ')';
	int t; scanf("%d", &t);
	while(t--){
	vector<char> a;
	int n;
	unsigned long long rank=0, k;
	scanf("%d %llu", &n, &k);
	int i;
	for(i=0; i<n; i++)
		a.push_back(o);
	for(i=0; i<n; i++)
		a.push_back(c);

	do{
		if(isValid(a)){
		rank++;
		if(rank == k){
			int i;
			for(i=0; i<a.size(); i++)
				printf("%c",a[i] );
			printf("\n");
			break;
		}}
	} while(next_permutation(a.begin(), a.end()));
	
	}	
	return 0;
}