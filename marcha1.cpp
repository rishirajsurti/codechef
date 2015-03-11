#include <stdio.h>
#include <iostream>
using namespace std;

int main(){
	int notes[25];
	int n,m,c,t,i,sum,tot;
	long long int s;
	cin>>tot;

	for(c=0; c<tot; c++){
	
		cin>>n>>m;
		for(i=0; i<n; i++)
			scanf("%d", notes+i);
	}
	for(s = (int)pow(2.0,n)-1; s>=0; s--){
		i=0;
		t = s;
		sum=0;
		while(t){
			if( t%2 )	sum+=notes[i];
			i++;
			t/=2;
		}
		if(sum==m)
	}
}