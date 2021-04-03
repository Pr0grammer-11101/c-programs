#include<stdio.h>

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
	if(n == 1)
	{
		printf("gamma(%d) = %d", n, n);
		return 0;
	}

	printf("
