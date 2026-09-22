#include <stdio.h>

int main()
{
	int n, target;
	int numbers[n];
	printf("Enter number of elements: ");
	scanf("%d", &n);	
	printf("Enter %d elements: ", n);
	for (int i = 0; i < n; i++)
	{
		scanf("%d", &numbers[i]);
	}
	
	printf("Enter target element: ");
	scanf("%d", &target);
	
	int position = -1;
	for (int i = 0; i < n; i++)
	{
		if (numbers[i] == target)
		{
			position = i;
			break;
		}
	}
	
	if (position != -1)
	{
		printf("Found at index %d\n", position);
	}
	else
	{
		printf("Not found\n");
	}
	return 0;
}
