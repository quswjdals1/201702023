#include<stdio.h>

void swap(int *a, int *b) {
	int val;
	val = *a;
	*a = *b;
	*b = val;
}

int main(void) {
	int a;
	scanf("%d", &a);
	int *p = &a;
	int b;
	scanf("%d", &b);
	int *d = &b;
	printf("a = %d, b = %d\n", *p, *d);
	swap(p, d);
	printf("swap()\n");
	printf("a = %d, b = %d", *p, *d);

	return 0;
}