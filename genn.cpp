#include <cstdio>
#include <set>
#include <map>
#include <string>
#include <iostream>
using namespace std;

int main(){
	set<int> s[3];
	s[1].insert(3);
	printf("%d\n", *s[1].find(3));
	map< pair<int, int>, int> m[3];
	m[0].insert(make_pair(make_pair(1,2), 452));
	//auto res = m[0].find(make_pair(1,2));
	printf("%d", m[0][make_pair(1,2)]);
	return 0;
}

/*#include <cstdio>
#include <string>
#include <iostream>
#include <algorithm>
using namespace std;

bool isPalin(string s){
	int left = 0, right = s.size()-1;
	bool ok = true;
	while(left <=right){
		if(s[left] != s[right]){
			ok = false;
			break;
		}else{
			left++; right--;
		}
	}
	return ok;
}

int main(){
	string s1 = "acb", s2="bca";
	cout<< isPalin(s1+s2)<<endl;
	return 0;
}
/*#include <iostream>
#include <cstdio>
#include <cstdlib>
using namespace std;
int main(){
	char *b;
	b = (char *)malloc(sizeof(char));
	int c;
	while((c=fread(b,1,2,stdin))>0)
		cout<<*b<<endl;
	return 0;
}
*/