#include<stdio.h>

#define pi 3.14
#define prt printf("��ũ�� ��� ���� ����\n");
#define msg "\n define ����� ��ũ�δ� ��ó���⿡�� wn �ش� ��ũ�� ����� �״�� �ڵ忡 ġȯ�Ѵ�.\n"
#define SQUARE(x) ((x)*(x))
#define CUBE(x) (SQUARE(x)*(x))
#define MULT(x,y) ((x)*(y))

int main(void) {
	puts("const ���");
	const double RATE = 0.03;
	int deposit = 80000;
	printf("������ : %f \n" ,RATE);
	printf("���� �ܰ� : %d \n", deposit);
	printf("���ھ� : %f \n", deposit+RATE);

	puts("��ũ�λ��");
	double r = 7.58;
	printf("%.2f�� ����: %.2f\n", 4.32, SQUARE(4,32));
	printf("%d�� ������: %f \n", 3,	CUBE(3));
	printf("%.2f* %�� = %.2f %f \n", 4.32, 3, MULT(4.32, 3));

	printf("���� ���� : %.2f \n", r * r * pi);
	puts(msg);
	prt;
	return 0;
}