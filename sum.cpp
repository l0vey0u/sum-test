#include "sum.h"

int sum(int n) {
	return (n*(n+1))/2;
}

int _sum(int n) {
	int res = 0;
	for (int i = 1; i <= n; ++i)
		res += i;
	return res;
}
