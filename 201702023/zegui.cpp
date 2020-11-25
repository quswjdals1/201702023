#include<stdio.h>

int maxcal(int x, int y) {
	return x > y ? x : y;
}

int max(int num[], int b) {
	
	
	
	
	if (b == 1) {
		return num[0];
	}
	else
		return maxcal(num[b-1],max(num,b-1)) ;
}

int main(void) {
	int x[10];
	for (int i = 0; i < 10; i++) {
		scanf("%d", &x[i]);
	}
	int m = x[0];
	for (int w = 0; w < 10; w++) {
		if (m < x[w])
			m = x[w];
	}
	printf("loop : %d\n", m);

	printf("recursive : %d", max(x, 10));


}