#include <stdio.h>

int main()
{
	int x, y;
	printf("Enter two numbers: ");
	scanf("%d %d", &x, &y);
	
	int a = x, b = y;
	while (b != 0)
	{
		int t = b;
		b = a % b;
		a = t;
	}
	int gcd = a;
	int lcm = (x * y) / gcd;
	
	printf("GCD : %d\n", gcd);
	printf("LCM : %d\n", lcm);
	return 0;
}
