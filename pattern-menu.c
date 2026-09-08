#include <stdio.h>

int main()
{
    int choice, size;
    printf("Menu:\n1. Right Triangle\n2. Inverted Right Triangle\n3. Square\n");
    printf("Select pattern: ");
    scanf("%d", &choice);
    printf("Enter size: ");
    scanf("%d", &size);

    switch (choice)
    {
        int i, j;

        case 1:
        for (i = 1; i <= size; i++)
        {
            for (j = 1; j <= i; j++)
            {
                printf("*");
            }
            printf("\n");
        }
        break;

        case 2:
        for (i = size; i >= 1; i--)
        {
            for (j = 1; j <= i; j++)
            {
                printf("*");
            }
            printf("\n");
        }
        break;
        
        case 3:
        for (i = 1; i <= size; i++)
        {
            for (j = 1; j <= size; j++)
            {
                printf("*");
            }
            printf("\n");
        }
        break;

        default:
        printf("Invalid input\n");
    }
    return 0;
}