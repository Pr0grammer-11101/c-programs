#include<stdio.h>

// CODE WORKING PERFECTLY

int divisible(int,int);

int main(void)
{

	int n, count=0;
	printf("Enter a number: "); 
	scanf("%d", &n);

	divisible(n, count);

	return 0;

} 

int divisible(int n, int count)
{
	if(n == 0)
	{
		if(count%2 == 0)
		{
			printf("EVEN\n");
			return 0;
		}
		else
		{
			printf("ODD\n");
			return 0;
		}
	}
	count++;

	return divisible(n/10, count);
}
