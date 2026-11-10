#include <stdio.h>

int main()
{
	int n, passcount = 0, aboveavg = 0, sum = 0;
	
	printf("Enter number of students: ");
	scanf("%d", &n);
	
	int marks[n];
	printf("Enter marks: ");
	for (int i = 0; i < n; i++)
	{
		scanf("%d", &marks[i]);
	}
	
	for (int i = 0; i < n; i++)
	{
		sum = sum + marks[i];
	}
	double avg = (double)sum / n;
	
	int max = marks[0];
	int min = marks[0];
	for (int i = 0; i < n; i++)
	{
		if (marks[i] > max)
		{
			max = marks[i];
		}
		
		if (marks[i] < min)
		{
			min = marks[i];
		}
	}
	
	for (int i = 0; i < n; i++)
	{
		if (marks[i] >= 40)
		{
			passcount++;
		}
		
		if (marks[i] >= avg)
		{
			aboveavg++;
		}
	}
	
	
	printf("Average: %.2lf\n", avg);
	printf("Highest: %d\n", max);
	printf("Lowest: %d\n", min);
	printf("Passed: %d\n", passcount);
	printf("Above Average: %d\n", aboveavg);
	
	return 0;
}












