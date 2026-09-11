#include <stdio.h>
#include <math.h>

double vectorMag(double x, double y, double z);
double dotProduct(double x1, double y1, double z1, double x2, double y2, double z2);
double angle(double x1, double y1, double z1, double x2, double y2, double z2);

int main()
{
    double x1, x2, y1, y2, z1, z2;
    printf("Enter components of vector u (x1 y1 z1): ");
    scanf("%lf %lf %lf", &x1, &y1, &z1);
    printf("Enter components of vector v (x2 y2 z2): ");
    scanf("%lf %lf %lf", &x2, &y2, &z2);

    printf("Magnitude of u: %.6lf\n", vectorMag(x1,y1,z1));
    printf("Magnitude of v: %.6lf\n", vectorMag(x2,y2,z2));
    printf("Dot Product: %.6lf\n", dotProduct(x1,y1,z1,x2,y2,z2));

    if ((x1 == 0 && y1 == 0 && z1 == 0) || (x2 == 0 && y2 == 0 && z2 == 0))
    {
        printf("Error: Cannot calculate angle with zero vector.");
        return 0;
    }
    else
    {
        printf("Angle: %.6lf radians", angle(x1,y1,z1,x2,y2,z2));
    }
    return 0;
}

double vectorMag(double x, double y, double z)
{
    return sqrt(x*x + y*y + z*z);
}

double dotProduct(double x1, double y1, double z1, double x2, double y2, double z2)
{
    return x1*x2 + y1*y2 + z1*z2;
}

double angle(double x1, double y1, double z1, double x2, double y2, double z2)
{
    double ratio = (dotProduct(x1,y1,z1,x2,y2,z2)/(vectorMag(x1,y1,z1)*vectorMag(x2,y2,z2)));
    if (ratio > 1.0)
    {
        ratio = 1.0;
    }
    if (ratio < -1.0)
    {
        ratio = -1.0;
    }
    return acos(ratio);
}