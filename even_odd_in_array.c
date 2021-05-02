#include<stdio.h>
#define SIZE 10
int main(void)
{
	int a[SIZE], count_odd=0, count_even=0, i=0;

	printf("Enter the elements into the array:\n");
	
	while(i<SIZE)
	{
		scanf("%d", &a[i]);
		i++;
	}

	i=0;

	while(i<SIZE)
	{
		if(a[i]%2 == 0)
		{
			count_even++;
		}

		else
		{
			count_odd++;
		}
		
		i++;
	}

	printf("Even numbers in the array: %d\n", count_even);
	printf("Odd numbers in the array: %d\n", count_odd);

	return 0;
}
