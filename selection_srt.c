#include<stdio.h>

int selection_sort(int [], int);

int main(void)
{
	int size;

	printf("Enter the size of the array: ");
	scanf("%d", &size);

	int a[size], i=0;

	printf("Enter elements into the array:\n\n");

	while(i<size)
	{
		scanf("%d", &a[i]);

		i++;
	}

	selection_sort(a, size);

	return 0;
}

int selection_sort(int a[], int size)
{
	int temp, small, i, j, index;

	j=0;

	while(j<size)
	{
		i=j+1;
		small = a[j];
		index=j; //in case non of the elements are smaller than a[j], we will always have its index saved
		//to order it

		while(i<size)
		{
			if(a[i]<small)
			{
				small = a[i];
				index = i;
			}

			i++;
		}

		temp = a[j];
		a[j] = a[index];
		a[index]=temp;


		j++;
	}

	i=0;

	printf("Printing the sorted array.....\n\n");

	while(i<size)
	{
		printf("%d\n", a[i]);
		i++;
	}


	return 0;
}
