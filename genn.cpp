#include <iostream>
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
