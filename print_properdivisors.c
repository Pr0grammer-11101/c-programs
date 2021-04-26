#include<stdio.h>

int proper_divisors(int, int, int);

int main(void)
{
	int number, i=1, sum;

	printf("Enter a number: ");
	scanf("%d", &number);

	sum = proper_divisors(number, i, 0);

	printf("The sum of the proper divisors of %d is: %d\n", number, sum);

	return 0;
}

int proper_divisors(int n, int factors, int sum)
{
	if(factors == n)
	{
		return sum;
	}

	if(n%factors == 0)
	{
		printf("%d, ", factors);
		sum += factors;

		factors++;
	}

	else
	{
		factors++;
	}
	
	sum = proper_divisors(n, factors, sum);

	return sum;

	

	
}
