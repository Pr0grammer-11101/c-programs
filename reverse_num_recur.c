#include<stdio.h>

int reverse_number(int, int);

int main(void)
{
	int num;

	printf("Enter a number: ");
	scanf("%d", &num);

	reverse_number(num, 0);

	return 0;
}

int reverse_number(int n, int last_digit)
{

	if(n<10)
	{
		last_digit = n + last_digit*10;
		printf("The reverse of the given number is: %d", last_digit);
		return 0;
	}

	last_digit = n%10 + last_digit*10;

	reverse_number(n/10, last_digit);
	return 0;
}
