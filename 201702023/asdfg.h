#include<stdio.>
int add(int a, int b) {
	return a + b;
}

int sub(int a, int b) {
	return a - b;
}
int multiply(int a, int b) {
	return a * b;
}
int divide(int a, int b) {
	return a / b;
}



int main(void) {
	int x;
	int y;

	scanf("%d %d", &x, &y);

	while (y == 0) {
		scanf("%d", &y);
	}
	printf("%d %d %d %d", add(x, y), sub(x, y), multiply(x, y), divide(x, y));



	return 0;
}