#include <stdio.h>
#include <algorithm>

const int MAXN = 30;

int limit[MAXN];
int weight[MAXN];

int check(bool flag) {
	return 1 / flag;
}

int main() {
	int cnt;
	scanf("%d", &cnt);
	for (int tst=1; tst <= cnt; tst++) {
		int n;
		scanf("%d", &n);
		check(n > 0 && n <= MAXN);
//		printf("n=%d\n", n);
		for (int i=0; i < n; i++) {
			scanf("%d", &weight[i]);
			check(weight[i] > 0 && weight[i] <= 100);
		}
		for (int i=0; i < n; i++) {
			scanf("%d", &limit[i]);
			check(limit[i] > 0 && limit[i] <= 100);
		}
		std::stable_sort(limit, limit + n);
		std::stable_sort(weight, weight + n);
		int res = 0;
		for (int i=0, j = 0; i < n && j < n; i++) {
			while (j < n && weight[i] > limit[j])
				j++;
			if (j < n) {
				res++;
				j++;
			}
		}
		printf("%d\n", res);
	}
	return 0;
}
