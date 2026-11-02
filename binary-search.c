#include <stdio.h>

int main()
{
    int n;
    printf("Enter no. of elements: ");
    scanf("%d", &n);

    int numbers[n];

    printf("Enter %d sorted elements: ", n);
    for(int i = 0; i < n; i++)
    {
        scanf("%d", &numbers[i]);
    }

    int target;
    printf("Enter target: ");
    scanf("%d", &target);

    int left = 0;
    int right = n - 1;
    int position = -1;

    while (left <= right)
    {
        int mid = left + (right - left)/2;

        if (numbers[mid] == target)
        {
            position = mid;
            break;
        }
        else if (numbers[mid] < target)
        {
            left = mid + 1;
        }
        else 
        {
            right = mid - 1;
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