#include <stdio.h>
#include <stdlib.h>

int func(int year) {
	int a, b, c, d, e, f;
	a = (year % 19);
	b = (year % 4);
	c = (year % 7);
	d = ((19 * a + 15) % 30);
	e = (2 * b + 4 * c + 6 * d + 6) % 7;
	f = (d + e);
	if (f <= 26) {
		f = 4 + f;		 
	}
	else {
		f = 26;
	}
	printf("f = ");
	return f;
}

int main() {
	int god;
	god = func(2022);
	printf("%d", god);
	system ("pause");
	return 0; 
}