#include <stdio.h>
#include <math.h>

int main()
{
    int N, n = 1;
    printf("Enter number of terms: ");
    scanf("%d", &N);
    
    double actualpi = acos(-1.0);
    double term = 0, approxpi = 0;

    while (n <= N)
    {
        if (n % 2 == 0)
        {
            term = 4 * (1.0/(2*n-1)) * (-1);
        }
        else 
        {
            term = 4 * (1.0/(2*n-1));
        }
        n++;
        approxpi = approxpi + term;
    }
    printf("Approximate pi : %.6lf\n", approxpi);
    printf("Actual pi : %.6lf\n", actualpi);
    printf("Percentage error : %.6lf%%\n", ((actualpi - approxpi)/actualpi)*100);
   
    return 0;
}