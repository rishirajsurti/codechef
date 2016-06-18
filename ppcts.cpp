#include <bits/stdc++.h>
using namespace std;

typedef unsigned long long llu;
#define EPS 1e-9

struct point { double x, y;   // only used if more precision is needed
  point() { x = y = 0.0; }                      // default constructor
  point(double _x, double _y) : x(_x), y(_y) {}        // user-defined
  bool operator == (point other) const {
   return (fabs(x - other.x) < EPS && (fabs(y - other.y) < EPS)); } };


double dist(point p1, point p2) {                // Euclidean distance
  return fabs(p1.x - p2.x)+ fabs(p1.y - p2.y); }           // return double
  
int main(){
	llu n,m;
	scanf("%llu %llu", &n, &m);
	llu i, x, y;
	vector<point> c;
	point pt;
	for(i=0; i<n; i++){
		scanf("%lf %lf", &pt.x, &pt.y);
		c.push_back(pt);
	}

	string s;
	point cur;
	double ans;
	cin>>s;
	int j;
	cur.x = 0.0;
	cur.y = 0.0;
	int sz = c.size();

	for(int i = 0; i<m; i++){
		ans = 0.0;
		if(s[i] == 'D'){
			--cur.y;
	//		printf("%lf %lf\n", cur.x, cur.y);
			for(j=0; j<sz; j++)
				ans += (fabs(cur.x-c[j].x) + fabs(cur.y - c[j].y));
		} else if(s[i] == 'U'){
			++cur.y;
	//		printf("%lf %lf\n", cur.x, cur.y);

			for(j=0; j<sz; j++)
				ans += (fabs(cur.x-c[j].x) + fabs(cur.y - c[j].y));
		} else if(s[i] == 'L'){
			--cur.x;
	//		printf("%lf %lf\n", cur.x, cur.y);

			for(j=0; j<sz; j++)
				ans += (fabs(cur.x-c[j].x) + fabs(cur.y - c[j].y));

		} else if(s[i] == 'R'){
			++cur.x;
	//		printf("%lf %lf\n", cur.x, cur.y);

			for(j=0; j<sz; j++)
				ans += (fabs(cur.x-c[j].x) + fabs(cur.y - c[j].y));
		}
		printf("%.0lf\n", (ans));
	}

}