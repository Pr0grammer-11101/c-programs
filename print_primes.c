#include<stdio.h>

int factors(int);

int main(void)
{
	int n;
	printf("Enter a number: "); scanf("%d", &n);


	factors(n);

	return 0;
}

int factors(int n)
{
	int i=2;
	while(n!=1)
	{
		while(n%i != 0) // take the first factor that divides n completely
	
		{
		
			i++;
	
		}
		printf("%d, ", i);
		n/=i;
		i=2;
	}


	return 0;
}
		
