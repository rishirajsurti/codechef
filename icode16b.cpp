#include <bits/stdc++.h>
using namespace std;

int main(){
	int t; scanf("%d", &t);
	while(t--){
		string a,b, c,d;
		cin>>a; cin>>b;
		int three=0, two=0, five=0;
		int i,j;
		for(i=0; i<a.size(); i++){
			if(a[i] == b[i]){
				three++;
			}
			else{
				c+=a[i];
				d+=b[i];
			}
		}
		//cout<<c<<" "<<d<<endl;
		a=""; b="";
		bool matches;
		vector<char> m;
		for(i=0; i<c.size(); i++){
			for(j=0; j<d.size(); j++){
				if(i==j) continue;
				//cout<<c[i]<<"-"<<d[j]<<endl;
				if(c[i] == d[j]){
					
					if(find(m.begin(),m.end(), c[i])==m.end()){
					two++;	
					m.push_back(c[i]);

					}
				}
			}
		}

/*		for(i=0; i<m.size(); i++){
			printf("%c->", m[i]);
		}
		cout<<endl;
*/		for(i=0; i<c.size(); i++){
			if(find(m.begin(), m.end(), c[i]) == m.end())
				a+=c[i];

			if(find(m.begin(), m.end(), d[i]) == m.end())
				b+=d[i];
		}

	//	cout<<a<<" "<<b<<endl;

		for(i=0; i<a.size(); i++){
			for(j=0; j<b.size(); j++){
				if(a[i]== b[i])
					matches = true;
			}
			if(!matches)
				five++;
			matches = false;
		}

		printf("%dN%dJ%dS\n", three,two,five);
	}
	return 0;
}