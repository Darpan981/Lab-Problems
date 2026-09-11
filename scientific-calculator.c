#include <stdio.h>
#include <math.h>

int mainMenu(void);
void arithmeticMenu(void);
double add(double, double);
double subtract(double, double);
double multiply(double, double);
double divide(double, double);
void trigMenu(void);
void expMenu(void);

int main()
{
    mainMenu();
    return 0;
}

int mainMenu(void)
{
    int choice;
    printf("\n---MAIN MENU---\n1. Basic Arithmetic\n2. Trigonometry\n3. Exponentials\n4. Exit\n");
    printf("Select an option: ");
    scanf("%d", &choice);

    switch (choice)
    {
        case 1:
        arithmeticMenu();
        break;

        case 2:
        trigMenu();
        break;

        case 3:
        expMenu();
        break;

        case 4:
        printf("Exiting calculator. Goodbye!\n");
        return 0;

        default:
        printf("Invalid choice\n");
        mainMenu();
        break;
    }
}

void arithmeticMenu(void)
{
    int choice;
    double a, b;
    printf("\n---ARITHMETIC MENU---\n1. Addition\n2. Subtraction\n3. Multiplication\n4. Division\n5. Return to Main Menu\n");
    printf("Select an option: ");
    scanf("%d", &choice);

    switch(choice)
    {
        case 1:
        printf("Enter two real numbers: ");
        scanf("%lf %lf", &a, &b);
        printf("Result: %.4lf\n", add(a,b));
        arithmeticMenu();
        break;

        case 2:
        printf("Enter two real numbers: ");
        scanf("%lf %lf", &a, &b);
        printf("Result: %.4lf\n", subtract(a,b));
        arithmeticMenu();
        break;

        case 3:
        printf("Enter two real numbers: ");
        scanf("%lf %lf", &a, &b);
        printf("Result: %.4lf\n", multiply(a,b));
        arithmeticMenu();
        break;

        case 4:
        printf("Enter two real numbers: ");
        scanf("%lf %lf", &a, &b);
        if (b == 0)
        {
            printf("Cannot divide by 0!\n");
        }
        else
        {
            printf("Result: %.4lf\n", divide(a,b));
        }
        arithmeticMenu();
        break;

        case 5:
        mainMenu();
        break;

        default:
        printf("Invalid Input\n");
        arithmeticMenu();
        break;
    }
}

double add(double a, double b)
{
    return a + b;
}

double subtract(double a, double b)
{
    return a - b;
}

double multiply(double a, double b)
{
    return a * b;
}

double divide(double a, double b)
{
    return a / b;
}

void trigMenu(void)
{
    int choice;
    double angle;
    printf("\n---TRIGONOMETRY MENU---\n1. Sine\n2. Cosine\n3. Tangent\n4. Return to Main Menu\n");
    printf("Select an option: ");
    scanf("%d", &choice);

    switch(choice)
    {
        case 1:
        printf("Enter angle in radians: ");
        scanf("%lf", &angle);
        printf("Result: %.4lf\n", sin(angle));
        trigMenu();
        break;
        
        case 2:
        printf("Enter angle in radians: ");
        scanf("%lf", &angle);
        printf("Result: %.4lf\n", cos(angle));
        trigMenu();
        break;

        case 3:
        printf("Enter angle in radians: ");
        scanf("%lf", &angle);
        printf("Result: %.4lf\n", tan(angle));
        trigMenu();
        break;

        case 4:
        mainMenu();
        break;

        default:
        printf("Invalid Input\n");
        trigMenu();
        break;
    }
}

void expMenu(void)
{
    int choice;
    double a, b;
    printf("\n---EXPONENTIAL MENU---\n1. Power\n2. Square Root\n3. Exponential\n4. Natural Logarithm\n5. Return to Main Menu\n");
    printf("Select an option: ");
    scanf("%d", &choice);

    switch(choice)
    {
        case 1:
        printf("Enter base and exponent: ");
        scanf("%lf %lf", &a, &b);
        printf("Result: %.4lf\n", pow(a,b));
        expMenu();
        break;

        case 2:
        printf("Enter positive real number: ");
        scanf("%lf", &a);
        if (a < 0)
        {
            printf("Cannot support imaginary numbers!\n");
        }
        else
        {
            printf("Result: %.4lf\n", sqrt(a));
        }
        expMenu();
        break;

        case 3:
        printf("Enter exponent: ");
        scanf("%lf", &a);
        printf("Result: %.4lf\n", exp(a));
        expMenu();
        break;

        case 4:
        printf("Enter argument: ");
        scanf("%lf", &a);
        printf("Result: %.4lf\n", log(a));
        expMenu();
        break;

        case 5:
        mainMenu();
        break;

        default:
        printf("Invalid Input\n");
        expMenu();
        break;
    }
}