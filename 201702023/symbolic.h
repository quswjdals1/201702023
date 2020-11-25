#include<stdio.h>

#define pi 3.14
#define prt printf("매크로 상수 예제 종료\n");
#define msg "\n define 선언된 매크로는 전처리기에서 wn 해당 매크로 상수를 그대로 코드에 치환한다.\n"
#define SQUARE(x) ((x)*(x))
#define CUBE(x) (SQUARE(x)*(x))
#define MULT(x,y) ((x)*(y))

int main(void) {
	puts("const 상수");
	const double RATE = 0.03;
	int deposit = 80000;
	printf("이자율 : %f \n" ,RATE);
	printf("계좌 잔고 : %d \n", deposit);
	printf("이자액 : %f \n", deposit+RATE);

	puts("매크로상수");
	double r = 7.58;
	printf("%.2f의 제곱: %.2f\n", 4.32, SQUARE(4,32));
	printf("%d의 세제곱: %f \n", 3,	CUBE(3));
	printf("%.2f* %ㅇ = %.2f %f \n", 4.32, 3, MULT(4.32, 3));

	printf("원의 면적 : %.2f \n", r * r * pi);
	puts(msg);
	prt;
	return 0;
}