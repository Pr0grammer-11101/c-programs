#include<stdio.h>

int check_primes(int, int ,int); //recursive function

int main(void)
{
	int a, b;
	printf("Enter two numbers: ");
	scanf("%d-%d", &a, &b);

	check_primes(a, b, 0);

	return 0;
}

int check_primes(int a, int b, int count)
{
	int i=2, is_prime=1;

	if(a == b) //base condition
	{
		while(i<a)
		{
			if(a%i == 0)
			{
				is_prime=0;
				break;
			}

			i++;
		}

		if(is_prime == 1)
		{
			count++;
			printf("There are %d prime numbers between the given numbers\n", count);
			return 0;
		}

		else
		{
			printf("There are %d prime numbers between the given numbers\n", count);
			return 0;
		}
	}

	while(i<a)
	{
		if(a%i == 0)
		{
			is_prime=0;
			break;
		}
		
		i++;
	}

	if(is_prime == 1)
	{
		count++;
		a++;
		check_primes(a, b, count);
	}

	else
	{
		a++;
		check_primes(a, b, count);
	}

	return 0;
}
