#include<stdio.h>

int print_amicable(int, int);
int check_sum(int);

int main(void)
{
	int upperLimit, lowerLimit;

	printf("Enter the lower limit: ");
	scanf("%d", &lowerLimit);
	
	printf("Enter the upper limit: ");
	scanf("%d", &upperLimit);

	print_amicable(lowerLimit, upperLimit);

	return 0;
}


int print_amicable(int lL, int uL)
{
	int s1, s2, n1, n2;

	n1=lL;

	while(n1<uL)
	{
		s1=check_sum(n1);

		n2=lL;
		while(n2<uL)
		{
			s2=check_sum(n2);

			if(s2==n1 && s1==n2 && n1!=n2)
			{
				printf("(%d, %d)\n", n1, n2);
			}

			n2++;
		}

		n1++;
	}

	return 0;
}

int check_sum(int n)
{
	int s=0, i=1;

	while(i<n)
	{
		if(n%i==0)
		{
			s+=i;
		}

		i++;
	}

	return s;
}
