#include<stdio.h>

//THE CODE IS INCOMPLETE!!!

int LSearch(int[], int, int);

int selection_sort(int[], int);

int Binary_srch(int[], int, int);

int main(void)
{
	int size;

	printf("Enter the size of the array: ");
	scanf("%d", &size);

	int a[size], i=0;

	printf("Enter element into the array:\n\n");

	while(i<size)
	{
		scanf("%d", &a[i]);

		i++;
	}

	selection_sort(a, size);

	return 0;
}

int Lsearch(int a[], int s, int item)
{
	int i=0;
	while(i<s)
	{
		if(item == a[i])
		{
			return i;
		}

		i++;
	}

	return 0;
}

int selection_sort(int a[], int s)
{
	int i, j=0, small, temp, index, item;

	while(j<s)
	{
		i=j;
		small = a[j];
		while(i<s)
		{
			if(a[i]<small)
			{
				small = a[i];
			}

			i++;
		}

		index = Lsearch(a, s, small);

		temp = a[j];
		a[j] = small;
		a[index] = temp;

		j++;
	}

	i=0;
	printf("The sorted array is:\n");
	while(i<s)
	{
		printf("%d\n", a[i]);
		i++;
	}

	printf("Enter the element that you want to search for from the array: ");
	scanf("%d", &item);

	Binary_srch(a, s, item);

	return 0;
}

int Binary_srch(int a[], int s, int item)
{
	int mid, low=0, up=s-1, i=0;
	while(i<s)
	{
		mid = (low+up)/2;
		if(item<a[mid])
		{
			up = mid-1;
		}

		if(item>a[mid])
		{
			low = mid+1;
		}

		if(item == a[mid])
		{
			printf("%d is in position %d\n", item, mid+1);
			return 0;
		}
		
		i++;
	}

	printf("%d is not in the array...\n", item);
	return 0;
}
