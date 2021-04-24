#include<stdio.h>

/*CODE WORKING PERFECTLY
 * JUST NEEDS A LOGIC SO THAT IT CAN FIND THE DIFFERENCE BETWEEN sum1 and sum2 
 * and check if that difference is divisible by 11
*/
int divisible(int, int, int, int);

int main(void)
{
	int number, sum=1;
	printf("Enter a number: ");
	scanf("%d", &number);

	divisible(number, sum, 0, 0);

	return 0;
}

int divisible(int n, int sum, int s1, int s2) /*s1 is the sum of the digits in the even places and
						s2 is the sum of the digits in the odd places
						*/
{
	
	if(n<10)
	{
		if(sum%2 == 0)
		{
			s1+=n%10;
		}
		else
		{
			s2+=n%10;
		}
		
		printf("There are %d digits in the number\n", sum);

		if(s1>s2)
		{
			if((s1-s2) == 0 || (s1-s2)%11 == 0)
			{
				printf("The number is divisible by 11\n");
			}

			else
			{
				printf("The number is not divisible by 11\n");
			}
		}

		else
		{
			if((s2-s1) == 0 || (s2-s1)%11 == 0)
			{
				printf("The number is divisible by 11\n");
			}

			else
			{
				printf("The number is not divisble by 11\n");
			}
		}

		return 0;

		
	}
	
	if(sum%2 == 0)
	{
		s1+=n%10;
	}

	else
	{
		s2+=n%10;
	}
	sum++;
	
	return divisible(n/10, sum, s1, s2);
}
