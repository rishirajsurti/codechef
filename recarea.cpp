#include <bits/stdc++.h>
using namespace std;

typedef vector<int> vi;

class SegmentTree{	//segment tree is stored like a heap array

private:
	vi st, A, maxarea;
	int n;
	int left(int p) {return p << 1; }
	int right(int p) { return (p << 1) + 1; }

	//p is the index of the node of tree as in the array
	void build( int p, int L, int R){
		if ( L == R )
			st[p] = L;		//store  the index
		else{				//recursively compute the values
			build(left(p) , L , (L+R) / 2);
			build(right(p), (L+R)/2 + 1, R);
			int p1 = st[left(p)], p2 = st[right(p)];
			st[p] = (A[p1] <= A[p2]) ? p1 : p2;

		} } 

	int rmq(int p, int L, int R, int i, int j){

		if( i > R || j < L)	return -1; //current segment outside query range
		if( L >= i && R <= j) return st[p]; // completely inside query range

		int p1 = rmq(left(p), L, (L+R)/2, i , j);
		int p2 = rmq(right(p), (L+R)/2 + 1, R, i, j);

		if(p1 == -1)	return p2;
		if(p2 == -1)	return p1;
		return (A[p1] <= A[p2]) ? p1 : p2;
	}	

	int update_point(int p, int L, int R, int idx, int new_value){
		int i = idx, j = idx;

		// if the current interval does not intersect
		// the update interval, return this st node value!

		if( i > R || j < L)
			return st[p];

		// if the current interval is included in the update range,
		//update that st[node]
		if (L == i && R == j){
			A[i] = new_value;	//update underlying array
			return st[p] = L; // this index
		}

		//compute the minimum position in the 
		//left and right part of the interval
		int p1, p2;
		p1 = update_point(left(p), L, (L+R)/2, idx, new_value);
		p2 = update_point(right(p), (L+R)/2 + 1, R, idx, new_value);

		return st[p] = (A[p1] <= A[p2]) ? p1 : p2 ;
	}

public:
	SegmentTree(const vi &_A){
		A = _A;	n = (int)A.size(); //copy content for local usage
		st.assign(4 * n, 0);	//create large enough vector of zeroes
		maxarea.assign(4*n, 0);
		build(1, 0, n - 1);
	}

	int rmq(int i, int j){	
		return rmq(1, 0, n-1, i, j); //overloading
		}

	int update_point(int idx, int new_value){
		return update_point(1, 0, n - 1, idx, new_value);
	}

	
};


int main(){
	int n; scanf("%d", &n);
	vector<int> a(n);
	int i,j;
	for(i=0; i<n; scanf("%d", &a[i++]));

	SegmentTree st(a);
	int maxn = -1;
	for(i=0; i<n; i++){
		for(j=i; j<n; j++){
			maxn = max(maxn,a[st.rmq(i,j)]*(j-i+1));
		}
	}
	printf("%d\n", maxn);
	return 0;
}