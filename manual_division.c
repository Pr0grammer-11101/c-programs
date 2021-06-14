#include<stdio.h>

int divide(int, int);

int main(void)
{
	int n1, n2;

	printf("Enter n1 and n2 (n1/n2): ");
	scanf("%d/%d", &n1, &n2);

	divide(n1, n2);

	return 0;
}


int divide(int n1, int n2)
{
	int quotient=0, count=0, temp;

	while(!0)
	{
		if(quotient>n1)
		{
			break;
		}

		else if(quotient==n1)
		{
			break;
		}

		else 
		{
			quotient+=n2;
			if(quotient<=n1)
			{
				count++;
			}

		}

	}

	printf("The quotient of %d/%d is: %d", n1, n2, count);

	return 0;
}
