#include<stdio.h>
#include<string.h>

int main(void) {
	struct account {
		char name[12];
		int actnum;
		double balance;
	};

	struct account mine;
	strcpy(mine.name, "������");
	
	printf("%s", mine.name);
	return 0;
}