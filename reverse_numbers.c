#include<stdio.h>

int reverse_num(int);

int main(void)
{
	int n;
	printf("Enter a number: ");
	scanf("%d", &n);

	reverse_num(n);

	return 0;
}

int reverse_num(int n)
{
	int last_digit=0;
	while(n!=0)
	{
		last_digit = (n%10) + last_digit*10;
		n/=10;
	}
	printf("The reverse of the given number is: %d", last_digit);
	
	return 0;
}
