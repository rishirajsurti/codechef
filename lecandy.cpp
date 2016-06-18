#include <cstdio>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
	int TC, n,c,i,j, sum=0;
	vector<int> a;
	
	scanf("%d",&TC);
	
	while(TC--){
	
		scanf("%d",&n);
		scanf("%d",&c);
	
		i=n;
	
		while(i--){
			scanf("%d",&j);
			sum += j;
			a.push_back(j);
		}
		if(c>=sum)
			printf("Yes\n");
		else
			printf("No\n");

		sum=0;
		a.clear();
	}
}