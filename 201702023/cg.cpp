#include<stdio.h>

int main(void) {
	char c[10];
	int e[26];
	int y;

	for (int r = 0; r < 26; r++) {
		e[r] = 0;
	}
	for (int i = 0; i < 10; i++) {
		scanf(" %c", &c[i]);
	}
	for (int w = 0; w < 10; w++) {
		y = c[w] - 97;
		e[y]++;
	}

	for (int a = 0; a < 26; a++) {
		if (e[a] != 0)
			printf("%c : %d\n", (char)a + 97, e[a]);
	}
	return 0;
}