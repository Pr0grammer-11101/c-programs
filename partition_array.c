#include<stdio.h>

int partition(int[], int);

int main(void)
{
	int a[30], size, i;

	printf("Enter the size of the array: ");
	scanf("%d", &size);

	printf("Enter elements into the array: \n");

	i=0;

	while(i<size)
	{
		scanf("%d", &a[i]);
		i++;
	}

	partition(a, size);

	return 0;
}


int partition(int a[], int s)
{
	int i, j, temp;

	// bubble sort

	i=0;
	while(i<s)
	{
		j=0;
		while(j<s-1)
		{
			if(a[j]>a[j+1])
			{
				temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
			}
			j++;
		}

		i++;
	}


	printf("\n\nPrinting the array:\n\n");

	i=0;
	while(i<s)
	{
		printf("%d  ", a[i]);
		i++;
	}

	return 0;
}
