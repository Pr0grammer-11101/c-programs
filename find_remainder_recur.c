#include<stdio.h>

int find_remainders(int, int, int, int, int);

//CODE NEEDS MORE WORKING

int main(void)
{
	int a, b;

	printf("Enter dividend and divisor(\"a/b\"): ");
	scanf("%d/%d", &a, &b);

	find_remainders(a, b, 0, 0, 0);

	return 0;
}

int find_remainders(int a, int b, int temp, int remnder, int quotient)
{
	if(temp == a)
	{
		printf("The quotient is: %d\n", quotient);
		printf("The remainder is: %d\n", remnder);
		return 0;
	}

	if(temp > (a-b) && temp < a)
	{
		printf("The quotient is: %d\n", quotient);
		printf("The remainder is: %d\n", remnder);
		return 0;
	}

	temp += b;
	remnder = a-temp;
	quotient++;

	find_remainders(a, b, temp, remnder, quotient);
	return 0;
}
