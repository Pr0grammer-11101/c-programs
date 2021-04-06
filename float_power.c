#include<stdio.h>

float raise_power(float, int);

int main(void)
{
	float num, result; int power;

	printf("Enter a number: "); scanf("%f", &num);
	printf("Enter the power you want to raise it to: "); scanf("%d", &power);

	result=raise_power(num, power);
	printf("%f raised to the power of %d is: %f\n", num, power, result);

	return 0;
}

float raise_power(float n, int p)
{

	if(p == 1) // base condition
	{
		return n;
	}

	return n*raise_power(n, p-1);
}
