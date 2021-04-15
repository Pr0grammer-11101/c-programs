#include<stdio.h>

int divisible(int, int);

int main(void)
{
	int n, sum=0, result;
	
	printf("Enter a number: "); scanf("%d", &n);

	result = divisible(n, sum);

	if(result == 1)
	{
		printf("%d is divisible by %d\n", n, 9);
	}

	else
	{
		printf("%d is not divisible by %d\n", n, 9);
	}

	return 0;
}

int divisible(int n, int s)
{
	
	if(n<10)
	{
		s+=n;
		
		if(s%9 == 0)
		{
			return 1;
		}

		else
		{
			return -1;
		}
	}

	s+=n%10; // adding the last digit

	divisible(n/10, s); //calling divisible() with first digit as argument
}
