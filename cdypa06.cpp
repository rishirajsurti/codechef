#include <bits/stdc++.h>
using namespace std;

typedef pair<int, int> ii;
typedef vector<int> vi;

vi tp, cd;
int n,k; 

int fnc(int subject, int topics){
	//either you choose or drop;
	if(subject >=n  || topics>k) return -1;
	
	return max(fnc(subject+1, topics), fnc(subject+1, topics+tp[subject])+cd[subject]);
}

int main(){
	int t; scanf("%d", &t);
	while(t--){
		
		scanf("%d %d", &n, &k);
		int x,y,i;
		tp.assign(n,0);	cd.assign(n,0);

		for(i=0; i<n; i++){
			scanf("%d %d", &tp[i], &cd[i]);
//			a.push_back(ii(y,-x)); // sort according to highest credits/ lowest topics
		}
		printf("%d\n", fnc(0,0));
		//ii(credits, topics)
/*		int topics=0, credits = 0;	
		sort(a.begin(),a.end());
		reverse(a.begin(), a.end());
		for(i=0; i<a.size(); i++){
			ii front = a[i];
			if(topics+ (-front.second) <= k){
				topics+= (-front.second);
				credits+= (front.first);
			}
		}
		printf("%d %d\n", topics, credits);
*/	}
	return 0;
}