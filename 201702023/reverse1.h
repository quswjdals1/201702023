#include<stdio.h>
#include<string.h>


int main(void) {

	char s[50];
	scanf("%s", &s);

	for (int i = 0; i < strlen(s)/2; i++)
	{
		char b = s[i];
		s[i] = s[strlen(s)-1-i];
		s[strlen(s)-1-i] = b;
	}

	printf("%s\n", &s);

	return 0;
}