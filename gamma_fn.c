#include<stdio.h>

//program that explains about gamma functions using recursion:

int gma_f(int);

int main(void)
{
	int n;

	printf("Enter a number: "); scanf("%d", &n);

	gma_f(n);

	return 0;
}

int gma_f(int n)
{
	if(n == 1) // base condition
	{
		printf("gamma(%d) = %d", n, n);
		return 0;
	}

	
	printf("gamma(%d) = %d*gamma(%d)\n", n, n-1, n-1);

	gma_f(n-1);
}
