#include <stdio.h>

int main()
{
	int n;
	printf("Enter number of elements: ");
	scanf("%d", &n);
	printf("Enter %d elements: ", n);
	
	int numbers[n];
	
	double sum = 0;
	double average = 0;
	for (int i = 0; i < n; i++)
	{
		scanf("%d", &numbers[i]);
		sum = sum + numbers[i];
		average = sum / 5;
	}
	
	int min = numbers[0];
	int max = numbers[0];
	for (int i = 0; i < n; i++)
	{
		if (numbers[i] < min)
		{
			min = numbers[i];
		}
		if (numbers[i] > max)
		{
			max = numbers[i];
		}
	}
	printf("Sum: %.0lf \nAverage: %.2lf \nMinimum: %d \nMaximum: %d \n", sum, average, min, max);
	
	return 0;
}
