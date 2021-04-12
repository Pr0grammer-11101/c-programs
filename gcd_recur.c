#include<stdio.h>

int hcf(int, int, int);

int main(void)
{
	int n1, n2, i;

	printf("Enter two numbers: "); scanf("%d %d", &n1, &n2);

	printf("The HCF of %d and %d is:", n1, n2);
	hcf(n1, n2, i=n1>n2?n1-1:n2-1);

	return 0;
}

int hcf(int _1, int _2, int i)
{
	

	if(i==0)
	{
		printf("%d", 1);
		return 0;
	}

	else
	{
		if(_1%i == 0 && _2%i == 0)
			
		{
				
			
		
			printf("%d", i);
			return 0;
			
		
	
		}
			
		
	
		else	
		{
			
			--i;
		
			hcf(_1, _2, i);
		
	
		}
	}
	
}
