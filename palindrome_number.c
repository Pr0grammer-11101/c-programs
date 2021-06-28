#include<stdio.h>

int check_palindrome(int);


void main()
{
	int number;

	printf("Enter a number: ");

	scanf("%d", &number);


	check_palindrome(number);
}



int check_palindrome(int n)
{
	int sample, last_digit, add=0;

	sample=n;

	while(sample!=0)
	{
		last_digit=sample%10; // taking the last digit
		add=add*10+last_digit;
		sample/=10;
	}

	if(add==n)
	{
		printf("\nThe given number is palindrome....\n\n");
	}

	else
	{
		printf("\nThe given number is not palindrome....\n\n");
	}

	return 0;
}
