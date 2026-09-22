#include <stdio.h>

int main()
{
	int n;
	printf("Enter number of elements: ");
	scanf("%d", &n);
	printf("Enter %d elements: ", n);
	
	int numbers[n];
	for (int i = 0; i < n; i++)
	{
		scanf("%d", &numbers[i]);
	}
	
	printf("Array: ");
	for (int i = 0; i < n; i++)
	{
		printf("%d ", numbers[i]);
	}
	printf("\n");
	
	return 0;
}
