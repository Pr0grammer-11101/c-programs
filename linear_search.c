#include<stdio.h>

int linear_search(int[], int, int);

int main(void)
{
	int n;
	printf("Enter the size of the array: ");
	scanf("%d", &n);

	int a[n], i=0, element;

	printf("Array created\n");

	printf("Enter elements into the array:\n\n");

	i=0;

	while(i<n)
	{
		scanf("%d", &a[i]);

		i++;
	}

	printf("Enter the element to be searched from the array: ");
	scanf("%d", &element);

	linear_search(a, n, element);

	return 0;
}

int linear_search(int a[], int n, int e)
{
	int i=0;

	while(i<n)
	{
		if(e == a[i])
		{
			printf("%d is in position %d", e, i+1);
			return 0;
		}

		else
		{
			++i;
			continue;
		}

	}

	return 0;
}
