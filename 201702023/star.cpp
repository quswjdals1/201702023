#include<stdio.h>

int main(void) {
	int a;
	scanf("%d", &a);

	for (int i = 0; i <= a-1; i++) {
		for (int j = 0; j <= a-1 - i - 1; j++) {
			printf(" ");
		}
		for (int z = 0; z <= i; z++) {
			printf("%d",a-z-(a-1-i));
		}
		printf("\n");
	}


	return 0;
}