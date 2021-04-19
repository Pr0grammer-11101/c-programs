#include<stdio.h>

//CODE SUCCESSFUL

int divisible(int);

int main(void)
{
	int n;
	printf("Enter a number: "); 
	scanf("%d", &n);

	divisible(n);

	return 0;

} 

int divisible(int n)
{
	int i, j=0, n1=n, sum=0;
	while(n!=0)
	{
		i=n%10;
		sum+=1;
		n/=10;
	}
	n=n1;

	if(sum%2 == 0)
	{
		printf("There are even number of digits in %d\n\n", n);
	}

	else
	{
		printf("There are odd number of digits in %d\n\n", n);
	}
		

	while(n1!=0)
	{
		if(sum%2 == 0)
		{
			printf("%d is at even place\n", n1%10);
			n1/=10;
			sum--;
		}

		else
		{
			printf("%d is at odd place\n", n1%10);
			n1/=10;
			sum--;
		}

		

	}

	return 0;
}
