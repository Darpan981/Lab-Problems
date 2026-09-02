#include <stdio.h>

int main()
{
    int n;
    printf("Enter a positive integer: ");
    scanf("%d", &n);

    int s = n;

    while (s >= 10)
    {
        int sum = 0;
        int t = s;
        while (t > 0)
        {
            sum = sum + t % 10;
            t /= 10;
        }
        printf("Intermediate sum: %d\n", sum);
        s = sum;  
    }
    printf("Digital root: %d\n", s);  
    return 0;
}