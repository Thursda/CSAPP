#include "stdio.h"

/*
 * 画出蛇形矩阵
 * 1 2 3
 * 8 9 4
 * 7 6 5
 */

void addCircle(int a[][9], int x, int n){
	// 在从点（x, x)开始，填充宽度为n的一圈递增序列，序列重p开始
	int p = x + (n-1)*4;
	if(n == 1) {
		a[x][x] = p;
		return;
	}

	for (int i = 0; i < n-1; ++i)
		a[x][x+i] = p++;

	for (int i = x; i < x + n-1; ++i)
		a[i][x+n-1] = p++;

	for (int i = x + n -1; i > x; --i)
		a[x+n-1][i] = p++;

	for (int i = x + n -1; i > x; --i)
		a[i][x] = p++;
}

int main(int argc, char const *argv[])
{
	/* code */
	int a[9][9];
	int x = 0;
	int p = 1;
	for (int n = 9; n > 1; n = n -2)
	{

		// int p = x + (n-1)*4;
		// 在从点（x, x)开始，填充宽度为n的一圈递增序列，序列重p开始
		for (int i = 0; i < n-1; ++i)
			a[x][x+i] = p++;

		for (int i = x; i < x + n-1; ++i)
			a[i][x+n-1] = p++;

		for (int i = x + n -1; i > x; --i)
			a[x+n-1][i] = p++;

		for (int i = x + n -1; i > x; --i)
			a[i][x] = p++;

		x++;

	}
	a[4][4] = p;

	printf("-----------\n");
	for (int i = 0; i < 9; ++i)
	{
		for (int j = 0; j < 9; ++j)
		{
			printf("%d\t", a[i][j]);
		}
		printf("\n");
		/* code */
	}
	return 0;
}
