#include<stdio.h>

// CODE IS COMPLETE!!! 


int remainder_num(int, int);

int main(void)
{
	int a, b;

	printf("Enter two numbers: ");
	scanf("%d-%d", &a, &b);
	printf("%d/%d: \n", a, b);

	remainder_num(a, b);

	return 0;
}

int remainder_num(int a, int b)
{
	int temp=0, remainder, quotient=0;
	while(1)
	{
		if(temp == a)
		{
			break;
		}

		else if(temp > (a-b) && temp < a)
		{
			break;
		}
		else
		{
			temp += b;
			quotient++;
			remainder = a-temp;
		}



	}

	printf("The quotient is %d and the remainder is %d\n", quotient, remainder);

	return 0;
}
