#include <bits/stdc++.h>
using namespace std;
#define EPS 1e-9

struct point{
	double x, y;
};

double area(const vector<point> &P){
	double result = 0.0, x1, y1, x2, y2;
	for(int i =0; i<(int)P.size()-1; i++){
		x1 = P[i].x; x2 = P[i+1].x;
		y1 = P[i].y; y2 = P[i+1].y;
		result += (x1*y2 - x2*y1);
	}

	return fabs(result) /2.0; 
}

int main(){
	int t; scanf("%d", &t);
	while(t--){
		vector<point> t1, t2, r;
		int i,j, x, y;
		point pt;
		for(i=0; i<3; i++){
			scanf("%lf %lf", &pt.x, &pt.y);
			t1.push_back(pt);
		}
		t1.push_back(t1[0]);
		for(i=0; i<3; i++){
			scanf("%lf %lf", &pt.x, &pt.y);
			t2.push_back(pt);
		}
		t2.push_back(t2[0]);
		for(i=0; i<4; i++){
			scanf("%lf %lf", &pt.x, &pt.y);
			r.push_back(pt);
		}
		r.push_back(r[0]);
		
		double at1, at2, ar;
		at1 = area(t1);
		at2 = area(t2);
		ar = area(r);
		if(fabs(ar - at1 - at2) <EPS)
			printf("Yes\n");
		else
			printf("No\n");
	}
	return 0;
}