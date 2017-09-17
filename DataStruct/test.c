#import "stdio.h"

int maxXOR(int a, int b){
	return 0;
}


bool findInSeqMatrix(int a[4][4], int rows, int columns, int number){
	int curCol = columns -1;
	if(a != NULL && rows > 0 && columns > 0){
		for (int i = 0; i < rows; ++i)
		{
			for (int j =  curCol; j >= 0; --j){
				printf("%d\t", a[i][j]);
				if(a[i][j] > number){//如果大于给定数字，则当前列中其他数字都大于给定数字，解空间在左边的列	
					curCol = j -1;
					continue;
				}else if(a[i][j] < number){//如果小于给定数字，则下移一行
					break;
				}else{
					printf("i = %d, j = %d\n", i, j);
					return true;
				}
			}
		}
	}
	return false;
}

bool findInSeqMatrix2(int a[4][4], int row, int columns, int number){
	if(a == NULL || row < 0 || columns < 0) return false;

	int i = 0, j = columns -1;
	while(i < row && j >= 0){
		int curNum = a[i][j];
		printf("%d\t", curNum);
		if(curNum == number){
			printf("i = %d, j = %d\n", i, j);
			return true;
		} else if(curNum > number){
			j--;
		}else{
		  	i ++;
		}
	}

	return false;
}

int main(int argc, char const *argv[])
{
	int a[4][4] = {{1, 2, 8, 9}, {2, 4, 9, 12}, {4, 6, 10, 13}, {7, 8, 11, 15}};
	for (int i = 0; i < 4; ++i)
	{
		for(int j = 0; j < 4; ++j)
			printf("%d\t", a[i][j]);
		printf("\n");
	}
	printf("\n--------------------------\n");
	findInSeqMatrix(a, 4, 4, 7);
	printf("\n--------------------------\n");
	findInSeqMatrix2(a, 4, 4, 7);
	printf("\n--------------------------\n");

	return 0;
}