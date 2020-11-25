#include<stdio.h>

int main(void) {
	int x;
	scanf("%d", &x);
	int val;
	int q[] = { 500, 100, 50, 10, 5, 1 };
	for (int i = 0; i < 6; i++) {
		val= x/ q[i];
		printf("%d : %d\n",q[i],val);
		x = x % q[i];
	}

	
	return 0;
}