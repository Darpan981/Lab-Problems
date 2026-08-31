#include <stdio.h>

int main()
{
    int age;
    printf("Enter your age: ");
    scanf("%d", &age);

    if (age < 0)
    {
        printf("Invalid input\n");
    }
    if (age > 0 && age < 5)
    {
        printf("Free Ticket\n");
    } 
    if (age >= 5 && age <= 12)
    {
        printf("Rs. 120\n");
    }
    if (age >= 13 && age <= 59)
    {
        printf("Rs. 200\n");
    }
    if (age >= 60)
    {
        printf("Rs. 150\n");
    }
    return 0;
}