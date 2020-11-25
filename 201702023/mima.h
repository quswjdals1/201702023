#include<stdio.h>
void getminmax(int* a, int* b, int* max, int* min);
int main(void) {
	int a;
	scanf("%d", &a);
	int* pa = &a;
	int b;
	scanf("%d", &b);
	int* pb = &b;
	int* max = pa;
	int* min = pa;
	printf("a = %d, b = %d\n", *pa, *pb);
	getminmax(pa, pb, max, min);
	printf("min = %d, max = %d\n", *min, *max);

	return 0;
}
void getminmax(int* a, int* b, int* max, int* min) {
	if (*a >= *b) {
		*max = *a;
		*min = *b;

	}
	else {
		*max = *b;
		*min = *a;
	}

}