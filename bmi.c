#include <stdio.h>

int main()
{
    double w,h,bmi;
    printf("Enter weight in kgs: ");
    scanf("%lf", &w);
    if (w < 0)
    {
        printf("Invalid Input\n");
        return 0;
    }
    printf("Enter height in metres: ");
    scanf("%lf", &h);
    if (h < 0)
    {
        printf("Invalid Input\n");
        return 0;
    }
    bmi = w/(h*h);
    printf("BMI = %.2lf\n", bmi);

    if (bmi < 18.5)
    {
        printf("Underweight\n");
    }
    if (bmi >= 18.5 && bmi <= 24.9)
    {
        printf("Normal\n");
    }
    if (bmi >= 25.0 && bmi <= 29.9)
    {
        printf("Overweight\n");
    }
    if (bmi >= 30.0)
    {
        printf("Obese\n");
    }
    return 0;
}