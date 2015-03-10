#include <stdio.h>
#define MAXOP 1001
#define NMAZ 31

int opsize[MAXOP], poz[MAXOP][NMAX];
int nop;

int isPrime(int P){
	for(int i=2, i*i<=P; i++){
		if(P%i==0)
			return 0;
	}
	return 1;
}

void solve(int i, int j){
	int len = j-i +1;
	if(len == 1)
		return;
	for(int P = len; P>=2; P--)
		if((len%P==0) && isPrime(P)){
			int Q = len/P, k,l;
			for(k=i; i<=j; k+=Q)
				solve(k,k+Q-1);
			for(k=0; k<Q; k++){
				nop++;
				opsize[nop] = P;
				for(l=1; l<=P; l++)
					poz[nop][l] = i+k + (l-1)*Q;
			}
		}
}
int main(){
	int T;
	scanf("%d",&T);
	while(T--){
		int N,i,j;
		scanf("%d",&N);
		for(i=1; i<=N; i++){
			scanf("%d",&j);
		}
		nop = 0;
		solve(1,N);
	}
}