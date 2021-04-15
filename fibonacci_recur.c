#include<stdio.h>

int fib(int);

int main(void)
{
	int n, i=0;

	printf("Enter number of terms: "); 
	scanf("%d", &n);

	while(i<n)
	{
		printf("%d, ", fib(i)); //repeatedly sending different number for different outputs
		i++;
	}

	return 0;
}


int fib(int n)
{
	if(n == 0 || n == 1) //fib(0) & fib(1) return 1, so fib(2) returns 2
	
		return 1; 

	return (fib(n-1) + fib(n-2));
}
