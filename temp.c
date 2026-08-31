#include <stdio.h>
int main()
{
    float c,f;
    printf("Enter the temperature in celcius : ");
    scanf("%f", &c);
    f = ((c * 9)/5) + 32;
    printf("Your output is %.2f\n", f);
    return 0;
}