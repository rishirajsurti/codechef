#include <iostream>
#include <cstdio>
#include <math.h>
#include <string.h>
using namespace std;
int* c = new int[2000000];

long reverse_num(long num){
	long rev_num=0;
	
	while(num > 0){
		rev_num = rev_num*10 + (num%10);
		num = num/10;
	}
	return rev_num;
}


bool isPrime(long n){
	
	bool p = true;
	for(long i=2; i<=sqrt(n); i++){
		if(n%i==0)
			p = false;
	}
	return p;
}
/*
void generatePalin(){
	memset(a,0,sizeof a);

	for(int i=1; i<=1000000; i++){
		if(i==reverse_num(i)){
			//printf("%d ",i);
			a[i]=1;
		}
	}
}

void generatePrime(){
	memset(b,0,sizeof b);

	for(int i=2; i<=1000000; i++){
		if(isPrime(i)){
			printf("%d ",i);
			b[i]=1;
		}
	}
}
*/
void generate(){
	

	for(long i=1; i<=2000000-1; i++){
		if((i==reverse_num(i)) && isPrime(i)){
			c[i]=1;
		}
	}	
}

int main(){
	
	memset(c,0,sizeof c);
	generate();
	
	int n,i;
	scanf("%d",&n);

	i = n-1;
	while(!c[++i]){}
	printf("%d\n",i);
	return 0;
}

