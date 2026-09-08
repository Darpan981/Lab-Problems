#include <stdio.h>

int main()
{
    int num;
    printf("Enter a number between 1 to 1000: ");
    scanf("%d", &num);

    if (num < 1 || num > 1000)
    {
        printf("Invalid input");
        return 0;
    }

    int low = 1, high = 1000, guess, guesses = 0;
    printf("Target number is %d\n", num);

    while (1)
    {
        guess = (low + high)/2;
        guesses++;
        printf("Guessing %d...", guess);

        if (guess == num)
        {
            printf("Correct!\n");
            break;
        }
        else if (guess < num)
        {
            printf("Too Low!\n");
            low = guess + 1;
        }
        else
        {
            printf("Too High!\n");
            high = guess - 1;
        }
    }
    printf("Found in %d guesses\n", guesses);
    return 0;
}