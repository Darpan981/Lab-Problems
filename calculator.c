#include <stdio.h>

int main()
{
    int choice;
    double a,b;
    printf("Press 1 and enter to add\n");
    printf("Press 2 and enter to subtract\n");
    printf("Press 3 and enter to multiply\n");
    printf("Press 4 and enter to divide\n");

    printf("Enter choice: ");
    scanf("%d", &choice);

    switch (choice)
    {
        case 1:
            printf("Enter first number: ");
            scanf("%lf", &a);
            printf("Enter second number: ");
            scanf("%lf", &b);
            printf("%.2lf\n", a+b);
            break;
        case 2:
            printf("Enter first number: ");
            scanf("%lf", &a);
            printf("Enter second number: ");
            scanf("%lf", &b);
            printf("%.2lf\n", a-b);
            break;
        case 3:
            printf("Enter first number: ");
            scanf("%lf", &a);
            printf("Enter second number: ");
            scanf("%lf", &b);
            printf("%.2lf\n", a*b);
            break;
        case 4:
            printf("Enter first number: ");
            scanf("%lf", &a);
            printf("Enter second number: ");
            scanf("%lf", &b);
            if (b == 0) 
            {
                printf("Cannot divide by 0");
            }
            else 
            {
                printf("%.2lf\n", a/b);
            }
            break;
        default:
            printf("Invalid Choice\n");
    }
    return 0;
}