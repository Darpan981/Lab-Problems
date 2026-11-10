#include <stdio.h>

int main()
{
	int r, c;
	printf("Enter no. of rows and columns: ");
	scanf("%d %d", &r, &c);
	
	int A[r][c];
	for (int i = 0; i < r; i++)
	{
		for (int j = 0; j < c; j++)
		{
			scanf("%d", &A[i][j]);
		}
	}
	
	int B[r][c];
	for (int i = 0; i < r; i++)
	{
		for (int j = 0; j < c; j++)
		{
			scanf("%d", &B[i][j]);
		}
	}
	
	int C[r][c];
	printf("Matrix addition: \n");
	{
		for (int i = 0; i < r; i++)
		{
			for (int j = 0; j < c; j++)
			{
				C[i][j] = A[i][j] + B[i][j];
				printf("%d ", C[i][j]);
			}
			printf("\n");
		}
	}
	
	return 0;
}








