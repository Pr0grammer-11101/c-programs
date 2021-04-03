#include<stdio.h>

int convert(int);

int main(void)
{
	int number;

	printf("Enter a positive decimal number: "); scanf("%d", &number);

	convert(number);

	return 0;
}

int convert(int n)
{

	if(n/2 == 0) //base condition
	{
		printf("%d", n%2);
		return 0;
	}

	convert(n/2);
	printf("%d", n%2);
	return 0;
}


