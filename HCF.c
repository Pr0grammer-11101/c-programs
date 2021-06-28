#include<stdio.h>

int find_hcf(int, int);

int main(void)
{
	int a, b;

	printf("Enter first number: ");
	scanf("%d", &a);

	printf("Enter second number: ");
	scanf("%d", &b);

	find_hcf(a, b);

	return 0;
}


int find_hcf(int a, int b)
{
	int d;

	if(a>b)
	{
		d=a;

		while(d>0)
		{
			if(a%d==0 && b%d==0)
			{
				printf("\nThe HCF of the given numbers is: %d", d);
				return 0;
			}

			d--;
		}
	}

	else // if b>a
	{
		d=b;
		while(d>0)
		{
			if(a%d==0 && b%d==0)
			{
				printf("\nThe HCF of the given numbers is: %d", d);
				return 0;
			}

			d--;
		}

	}

	return 0;
}
