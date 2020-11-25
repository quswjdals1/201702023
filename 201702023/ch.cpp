#include<stdio.h>

int main(void) {
	char c[10];
	int e[123];
	int y;
	
	for (int r= 0; r < 123; r++) {
		e[r] = 0;
	}
	for (int i = 0; i < 10; i++) {
		scanf("%c", &c[i]);
		getchar();
	}
	for (int w = 0; w < 10; w++) {
		y=c[w];
		e[y]++;
	}

	for (int a = 97; a < 123; a++) {
		if (e[a] != 0)
			printf("%c : %d\n", (char)a, e[a]);
	}
	return 0;
}