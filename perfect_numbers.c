#include<stdio.h>

int perfect_num(int, int, int);

int main(void)
{
	int num;
	printf("Enter a number: ");
	scanf("%d", &num);

	perfect_num(num, 1, 0);

	return 0;
}


int perfect_num(int n, int factors, int sum)
{
	if(factors == n)
	{
		if(sum == n)
		{
			printf("%d is a perfect number.....", n);
			return 0;
		}

		else
		{
			printf("%d is not a perfect number.....", n);
			return 0;
		}
	}

	if(n%factors == 0)
	{
		sum+=factors;
		factors++;
	}

	else
	{
		factors++;
	}

	perfect_num(n, factors, sum);
	return 0;
}
