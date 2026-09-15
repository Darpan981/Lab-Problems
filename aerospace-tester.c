#include <stdio.h>

int choice, durability, cycles;
int pass = 0, fail = 0;
int thermalTest(int);
int kineticTest(int);
void report();

int main()
{
	printf("\n--- Aerospace Stress Tester ---\n");
	
	while (1)
	{
		printf("\n1. Valve\n2. Hull\n0. Exit\nEnter component type: ");
		scanf("%d", &choice);
		if (choice == 0)
		{
			report();
			return 0;
		}
	
		printf("Enter base durability: ");
		scanf("%d", &durability);
		printf("Enter test cycles: ");
		scanf("%d", &cycles);
	
		switch (choice)
		{
			case 1:
			thermalTest(durability);
			break;
		
			case 2:
			kineticTest(durability);
			break;
			
			default:
			printf("Invalid component type\n");
			break;
		}
	}
	return 0;
}

int thermalTest(int durability)
{
	for (int i = 1; i <= cycles; i++)
	{
		int n = durability % 10;
		durability = durability - (n + 5);
		
		if (durability < 20)
		{
			printf("Processing Thermal Test...\n[FAIL] Engine Valve melted during testing!\n");
			fail++;
			return durability;
		}
	}
	printf("Processing Thermal Test...\n[PASS] Engine Valve survived! Final durability: %d\n", durability);
	pass++;
	return durability;
}

int kineticTest(int durability)
{
	for (int i = 1; i <= cycles; i++)
	{
		if (durability % 2 == 0)
		{
			durability = durability / 2;
		}
		if (durability % 2 == 1)
		{
			durability = durability - 15;
		}
		
		if (durability < 30)
		{
			printf("Processing Kinetic Test...\n[FAIL] Hull plate shattered during testing!\n");
			fail++;
			return durability;
		}
	}
	printf("Processing Kinetic Test...\n[PASS] Hull plate survived! Final durability: %d\n", durability);
	pass++;
	return durability;
}

void report()
{
	printf("\nShutting Down...\n\n--- Daily Factory Report ---\n");
	printf("Total components passed: %d\n", pass);
	printf("Total components failed: %d\n", fail);
}