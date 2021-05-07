#include<stdio.h>
#define SIZE 10
int main(void)
{
	int a[SIZE], max, min, i=0;

	printf("Enter elements into the array:\n");

	while(i<SIZE)
	{
		scanf("%d", &a[i]);
		i++;
	}

	printf("Finding the maximum and minimum elements of the array.......\n");

	i=0;

	while(i<SIZE)
	{
		if(a[i+1]<a[i] && a[i]>a[i+2])
		{
			max=a[i];

		}

		
		
		i++;
	}

	printf("The maximum number is: %d\n", max);

	return 0;
}
