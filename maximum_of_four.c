#include<stdio.h>

int largest(int, int, int, int);

int main(void)
{
	int n1, n2, n3, n4, maxm;

	printf("Enter four numbers: ");
	scanf("%d %d %d %d", &n1, &n2, &n3, &n4);

	maxm=largest(n1, n2, n3, n4);

	printf("The largest number among %d, %d, %d & %d is: %d\n", n1, n2, n3, n4, maxm);

	return 0;
}


int largest(int a, int b, int c, int d)
{
	int max;
	
	if(a>b)
	{
		max=a;
		if(c>a)
		{
			max=c;
			if(d>c)
			{
				max=d;
			}

			else
			{
				;// null statement; value of max is still c
			}
		}

		else
		{
			; // value of max is still a
			if(d>a)
			{
				max=d;
			}
			else
			{
				;
			}
		}
	}

	else
	{
		max=b;

		if(c>b)
		{
			max=c;
			if(d>c)
			{
				max=d;
			}
			
			else
			{
				;// max still c
			}
		}

		else
		{
			; // max still b

			if(d>b)
			{
				max=d;
			}

			else
			{
				; // max still b
			}
		}
	}

	return max;
}
