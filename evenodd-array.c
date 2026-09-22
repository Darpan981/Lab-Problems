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
	
	int evencount = 0;
	int oddcount = 0;
	for (int i = 0; i < n; i++)
	{
		if (numbers[i] % 2 == 0)
		evencount++;
		
		else
		oddcount++;
	}
	printf("Number of even elements: %d\n", evencount);
	printf("Number of odd elements: %d\n", oddcount);
}
