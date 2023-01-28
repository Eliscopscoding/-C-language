#include <stdio.h>

int main()
{
	int k, i, j, sum = 0, row, column;
	// Input data for row and column which is equal for 2 input matrix
	printf("->Enter matrix  (row) :  ");
	scanf("%d", &row);
	printf("->Enter matrix  (column) :  ");
	scanf("%d", &column);

	int a[row][column], b[row][column], result[row][column];
	// Input data for 1st matrix
	printf("->Enter the first of matrix \n");
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < column; j++)
		{
			scanf("%d", &a[i][j]);
		}
	}
	// Input data for 2nd matrix
	printf("->Enter the second matrix\n");
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < column; j++)
		{
			scanf("%d", &b[i][j]);
		}
	}
	printf("\n\n");
	// Logic of addtion of 2 matrix and it will store this data in 3rd matrix
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < column; j++)
		{
			result[i][j] = a[i][j] + b[i][j];
		}
	}
	// Print 3rd matrix
	printf("Matrix addtion is:\n");
	for (i = 0; i < row; i++)
	{
		printf("|");
		for (j = 0; j < column; j++)
		{
			printf(" %d ", a[i][j]);
		}
		printf("|\n");
	}
	printf("   +\n");
	for (i = 0; i < row; i++)
	{
		printf("|");
		for (j = 0; j < column; j++)
		{
			printf(" %d ", b[i][j]);
		}
		printf("|\n");
	}
	printf("   =\n");
	for (i = 0; i < row; i++)
	{
		printf("|");
		for (j = 0; j < column; j++)
		{
			printf(" %d ", result[i][j]);
		}
		printf("|\n");
	}

	return 0;
}
