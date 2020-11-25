#include<stdio.h>

int main(void) {
	const pi = 3.14;
	double r = 9.23;

	long double d = r * r * pi;
	printf("%f", d);
	return 0;
}