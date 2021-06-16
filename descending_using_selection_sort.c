#include<stdio.h>

int selection_sort(int[], int);

void main()
{
	int a[30], size, i;

	printf("Enter the size of the array: ");
	scanf("%d", &size);

	printf("\nEnter elements into the array:\n\n");

	i=0;

	while(i<size)
	{
		scanf("%d", &a[i]);

		i++;
	}

	selection_sort(a, size);

}


int selection_sort(int a[], int s)
{
	int large, i, j, index, temp;


	i=0;

	while(i<s-1)
	{
		j=i+1;
		large=a[i];
		index=i;

		while(j<s)
		{
			if(a[j]>large)
			{
				large=a[j];
				index=j;
			}

			j++;
		}

		temp=a[i];
		a[i]=a[index];
		a[index]=temp;

		i++;
	}

	printf("\nPrinting array in descending order:\n\n");

	i=0;

	while(i<s)
	{
		printf("%d\n", a[i]);

		i++;
	}

	return 0;
	
}