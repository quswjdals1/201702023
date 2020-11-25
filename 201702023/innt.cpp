#include<stdio.h>

int main(void) {
	double a;
	scanf("%lf", &a);
	
	int w = (int)a;
	double e = a - w;
	printf("Integer : %d\n", w);
	printf("Float : %0.4lf\n", e);
	return 0;
}