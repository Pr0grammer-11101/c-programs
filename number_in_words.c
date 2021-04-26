#include<stdio.h>

int in_words(int);

int main(void)
{
	int number;

	printf("Enter a number: "); 
	scanf("%d", &number);

	in_words(number);

	return 0;
}

int in_words(int n)
{
	if(n<10) // if n is a single digit number
	{
		switch(n)
		{
			case 1:
				printf("one ");
				break;
			case 2:
				printf("two ");
				break;
			case 3:
				printf("three ");
				break;
			case 4:
				printf("four ");
				break;
			case 5:
				printf("five ");
				break;
			case 6:
				printf("six ");
				break;
			case 7:
				printf("seven ");
				break;
			case 8:
				printf("eight ");
				break;
			case 9:
				printf("nine ");
				break;
			default:
				printf(" ");
				
		}

		return 0;


	}

	in_words(n/10);
	switch(n%10)
	{
		case 0:
			printf(" zero");
			break;
		case 1:
			printf(" one");
			break;
		case 2:
			printf(" two");
			break;
		case 3:
			printf(" three");
			break;
		case 4:
			printf(" four");
			break;
		case 5:
			printf(" five");
			break;
		case 6:
			printf(" six");
			break;
		case 7:
			printf(" seven");
			break;
		case 8:
			printf(" eight");
			break;
		case 9:
			printf(" nine");
			break;

	}

	return 0;
}
