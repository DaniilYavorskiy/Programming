#include <stdio.h>
#include <stdlib.h>
int fact(int n) {
    int i;
	int res = 1;
	for (i = 1; i <= abs(n); i++)
		res *= i;

	return res;
}
int main() {
	int n;
	scanf("%d", &n);
	int C[n];
	int i;
	for (i = 1; i <= n; i++) {
		C[i] = fact(n) / (fact(i) * fact(n - i));
		printf("C%d = %d\n", i, C[i]);
	}
	
    system ("pause");
	return 0;
}
