#include <stdio.h>

int main()
{
    int n;
    printf("Enter no. of elements: ");
    scanf("%d", &n);

    int numbers[n];

    printf("Enter elements: ");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &numbers[i]);
    }

    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - 1 - i; j++)
        {
            if (numbers[j] > numbers[j + 1])
            {
                int temp = numbers[j];
                numbers[j] = numbers[j + 1];
                numbers[j + 1] = temp;
            }
        }
        printf("Sorted Array: %d ", numbers[i]);
    }

    printf("\n");
    return 0;
}