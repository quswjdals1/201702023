#include<stdio.h>





int main(void) {
	char board[3][3];
	int x, y, k, i, t;
	printf("�÷��̾� vs �÷��̾� 1��\n");
	printf("�÷��̾� vs ��ǻ�� 2��");

	scanf("%d", &t);

	if (t == 1) {
		for (x = 0; x < 3; x++)
			for (y = 0; y < 3; y++) board[x][y] = ' ';

		for (k = 0; k < 9; k++) {
			printf("(x,y) ��ǥ:");
			scanf(" %d %d", &x, &y);
			if (board[x][y] == ' ') {
				board[x][y] = (k % 2 == 0) ? 'X' : '0';
			}
			else {
				k--;
				continue;
			}

			for (int i = 0; i < 3; i++) {
				printf("---:---:---\n");
				printf("%c  : %c : %c \n", board[i][0], board[i][1], board[i][2]);
			}

			printf("---:---:---\n");
			if ((board[0][0] == 'X' && board[0][1] == 'X' && board[0][2] == 'X')
				|| (board[1][0] == 'X' && board[1][1] == 'X' && board[1][2] == 'X')
				|| (board[2][0] == 'X' && board[2][1] == 'X' && board[2][2] == 'X')
				|| (board[0][0] == 'X' && board[1][1] == 'X' && board[2][2] == 'X')
				|| (board[0][2] == 'X' && board[1][1] == 'X' && board[2][0] == 'X'))
			{
				printf("X�� WIN");
				break;
			}

			if ((board[0][0] == '0' && board[0][1] == '0' && board[0][2] == '0')
				|| (board[1][0] == '0' && board[1][1] == '0' && board[1][2] == '0')
				|| (board[2][0] == '0' && board[2][1] == '0' && board[2][2] == '0')
				|| (board[0][0] == '0' && board[1][1] == '0' && board[2][2] == '0')
				|| (board[0][2] == '0' && board[1][1] == '0' && board[2][0] == '0'))
			{
				printf("O�� WIN");
				break;
			}
		}
	}
	
	else if(t==2){
		int z = 0;
		for (x = 0; x < 3; x++)
			for (y = 0; y < 3; y++) board[x][y] = ' ';

		for (k = 0; k < 9; k++) {
			printf("(x,y) ��ǥ:");
			scanf(" %d %d", &x, &y);
			if (board[x][y] == ' ') {
				board[x][y] = '0';
			}
			else {
				k--;
				continue;
			}
			for (int j = 0; j < 3; j++) {
				if (board[z][j] == ' ') {
					board[z][j] = 'X';
					break;
				}
				if (j == 2) { z++; j = -1; }
			}


			for (int i = 0; i < 3; i++) {
				printf("---:---:---\n");
				printf("%c  : %c : %c \n", board[i][0], board[i][1], board[i][2]);
			}

			printf("---:---:---\n");
			if ((board[0][0] == 'X' && board[0][1] == 'X' && board[0][2] == 'X')
				|| (board[1][0] == 'X' && board[1][1] == 'X' && board[1][2] == 'X')
				|| (board[2][0] == 'X' && board[2][1] == 'X' && board[2][2] == 'X')
				|| (board[0][0] == 'X' && board[1][1] == 'X' && board[2][2] == 'X')
				|| (board[0][2] == 'X' && board[1][1] == 'X' && board[2][0] == 'X'))
			{
				printf("X�� WIN");
				break;
			}

			if ((board[0][0] == '0' && board[0][1] == '0' && board[0][2] == '0')
				|| (board[1][0] == '0' && board[1][1] == '0' && board[1][2] == '0')
				|| (board[2][0] == '0' && board[2][1] == '0' && board[2][2] == '0')
				|| (board[0][0] == '0' && board[1][1] == '0' && board[2][2] == '0')
				|| (board[0][2] == '0' && board[1][1] == '0' && board[2][0] == '0'))
			{
				printf("O�� WIN");
				break;
			}
		}
	}

	return 0;
}