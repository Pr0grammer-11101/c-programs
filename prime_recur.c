#include<stdio.h>


int prime_factors(int);

int main(void)
{
	int number;
	printf("Enter a number: "); scanf("%d", &number);


	prime_factors(number);

	return 0;
}

int prime_factors(int n)
{
	int i=2;
	
	if(n == 1)
	{
		return 0;
	}

	while(n%i != 0)
	{
		++i;
	}

	printf("%d, ", i);

	prime_factors(n/i);
	return 0;
}
