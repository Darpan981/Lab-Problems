#include <stdio.h>

int main()
{
    double mass, velocity, KE;
    printf("Enter mass (kg): ");
    scanf("%lf", &mass);
    printf("Enter velocity (m/s): ");
    scanf("%lf", &velocity);
    KE = 0.5 * mass * velocity;
    printf("Kinetic Energy: %.2lf J\n", KE);
    return 0;
}