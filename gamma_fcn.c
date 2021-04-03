#include<stdio.h>

//program to print values of gamma functions for a particular number using recursions

int gamma_f(int n);

int main(void)
{

	int n, result;

	printf("Enter a number: "); scanf("%d", &n);

	result = gamma_f(n);
	printf("Value of gamma(%d) is: %d", n, result);

	return 0;
}


int gamma_f(int n)
{

	if(n == 1) // base condition
	{
		return 1;
	}

	return ((n-1)*gamma_f(n-1));
}
