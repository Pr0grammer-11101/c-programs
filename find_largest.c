#include<stdio.h>

int find_large(int[], int);

int main(void)
{
	int a[30], size, i;

	printf("Enter the size of the array: ");
	scanf("%d", &size);

	printf("Enter the elements into the array:\n\n");

	i=0;

	while(i<size)
	{
		scanf("%d", &a[i]);

		i++;
	}


	find_large(a, size);

	return 0;
}


int find_large(int a[], int s)
{
	int large=a[s-1], s_large, i, temp;


	i=0;

	while(i<s)
	{
		if(a[i]>large)
		{
			large=a[i];
			temp=i;
		}

		i++;
	}

	a[temp]=0;  // removing the largest element in order to find the second largest element

	s_large=a[s-1];

	i=0;

	while(i<s)
	{
		if(a[i]>s_large)
		{
			s_large=a[i];

		}

		i++;
	}

	printf("\nThe largest element in the array is: %d\n", large);

	printf("\nThe second largest element in the array is: %d\n", s_large);

	return 0;
}
