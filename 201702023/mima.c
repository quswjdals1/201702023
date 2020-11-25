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
	int* min = pb;
	printf("a = %d, b = %d\n", *pa, *pb);
	getminmax(pa, pb, max, min);
	printf("getminmax()\n");
	printf("min = %d, max = %d", *min, *max);

	return 0;
}
void getminmax(int* a, int* b, int* max, int* min) {
	if (*a >= *b) {
		int n = *a;
		int m = *b;
		*max = n;
		*min = m;

	}
	else {
		int n = *a;
		int m = *b;
		*max = m;
		*min = n;
	}

}