#include <stdio.h>

int main()
{
    int choice1, choice2;
    printf("Player 1: \n");
    printf("Enter 1 to choose rock\nEnter 2 to choose paper\nEnter 3 to choose scissors\n");
    scanf("%d", &choice1);
    if (choice1 > 3 || choice1 < 1)
    {
        printf("Invalid input\n");
        return 0;
    }

    printf("Player 2: \n");
    printf("Enter 1 to choose rock\nEnter 2 to choose paper\nEnter 3 to choose scissors\n");
    scanf("%d", &choice2);
    if (choice2 > 3 || choice2 < 1)
    {
        printf("Invalid input\n");
        return 0;
    }

    if (choice1 == choice2)
    {
        printf("Draw\n");
        return 0;
    }
    else if ((choice1 == 1 && choice2 == 3) || (choice1 == 2 && choice2 == 1) || (choice1 == 3 && choice2 == 2))
    {
        printf("Player 1 wins\n");
    }
    else
    {
        printf("Player 2 wins\n");
    }
    return 0;
}