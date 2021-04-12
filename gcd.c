#include<stdio.h>

int GCD(int, int);

int main(void)
{
	//program to find HCF of two numbers
	int n1, n2;
	printf("Enter two numbers: "); scanf("%d %d", &n1, &n2);

	GCD(n1, n2);

	return 0;
}

int GCD(int _1, int _2)
{
	int i;
	if(_1 > _2)

		i = _2-1; // so that the if conditional does not break in the very first iteration
	

	else
		i = _1-1;

	while(1)
	{
		if(_1%i == 0 && _2%i == 0)
		{
			break;
		}
		--i;
	}

	printf("HCF or GCD of %d and %d is: %d\n", _1, _2, i); //GCD-GREATEST COMMON DIVISOR

	return 0;
}
