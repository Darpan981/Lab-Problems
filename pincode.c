#include <stdio.h>

int main()
{
    int pin, count = 0;
    do 
    {
        printf("**This is a locked system. Only 3 attempts to enter the correct 4 digit pin**\n");  
        printf("Enter PIN: ");
        scanf("%d", &pin);

        if (pin != 6383)
        {
            count++;
            if (count <= 2)
            {
                printf("Incorrect. Try again.\n");
            }
            else
            {
                printf("Too many failed attempts. Account locked.");
                break;
            }
        }
        else 
        {
            printf("Access granted!\n");
            break;
        }
    }
    while (1);
    return 0;
}