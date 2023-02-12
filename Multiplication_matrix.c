#include <stdio.h>

int main()
{
   int a[10][10], b[10][10], c[10][10], r1, c1, r2, c2, i, j, k;
label:
   // This is for the getting user row and columns
   printf("\nEnter rows and column for 1st matrix: ");
   scanf("%d %d", &r1, &c1);
   printf("\nEnter rows and column for 2nd matrix: ");
   scanf("%d %d", &r2, &c2);

   // This loop for the if column of 1st matrix and row of 2nd matrix are different
   while (c1 != r2)
   {
      printf("Wrong input !!! \n");
      goto label;
   }

   // Input of 1st matrix
   printf("\nEnter elements for 1st matrix : \n");
   for ( i = 0; i < r1; ++i)
   {
      for ( j = 0; j < c1; ++j)
      {
         printf("Enter a[%d][%d]: ", i + 1, j + 1);
         scanf("%d", &a[i][j]);
      }
   }

   // Input of 2nd matrix
   printf("\nEnter elements for 2nd matrix : \n");
   for ( i = 0; i < r2; ++i)
   {
      for ( j = 0; j < c2; ++j)
      {
         printf("Enter b[%d][%d]: ", i + 1, j + 1);
         scanf("%d", &b[i][j]);
      }
   }

   // Initializing elements of matrix multiplication to 0.
   for ( i = 0; i < r1; ++i)
   {
      for ( j = 0; j < c2; ++j)
      {
         c[i][j] = 0;
      }
   }

   // Multiplying first and second matrix and store it in c matrix
   for ( i = 0; i < r1; ++i)
   {
      for ( j = 0; j < c2; ++j)
      {
         for ( k = 0; k < c1; ++k)
         {
            c[i][j] += a[i][k] * b[k][j];
         }
      }
   }

   // Print the c matrix
   
   printf("Matrix Multiplication is:\n");
	for (i = 0; i < r1; i++)
	{
		printf("|");
		for (j = 0; j < c1; j++)
		{
			printf(" %d ", a[i][j]);
		}
		printf("|\n");
	}
	printf("   *\n");
	for (i = 0; i < r2; i++)
	{
		printf("|");
		for (j = 0; j < c2; j++)
		{
			printf(" %d ", b[i][j]);
		}
		printf("|\n");
	}
	printf("   =\n");
	for (i = 0; i < r1; i++)
	{
		printf("|");
		for (j = 0; j < c2; j++)
		{
			printf(" %d ", c[i][j]);
		}
		printf("|\n");
	}

	

   return 0;
}
