#include<stdio.h>

int insertion_srt(int[], int);

int main(void)
{
	int a[30], size, i;

	printf("Enter the size of the array: ");
	scanf("%d", &size);

	printf("Enter the elements into the array: \n");

	i=0;

	while(i<size)
	{
		scanf("%d", &a[i]);

		i++;
	}

	insertion_srt(a, size);


	return 0;
}


int insertion_srt(int a[], int size)
{
	int i, j=0, temp;
	i=0;

	while(i<size-1)
	{
		j=i+1;
		while(j>0)
		{
			if(a[j]<a[j-1])
			{
				temp = a[j];
				a[j] = a[j-1];
				a[j-1] = temp;
			}

			j--;
		}

		i++;

	}

	printf("\nPrinting the sorted array:\n\n");

	i=0;

	while(i<size)
	{
		printf("%d\n", a[i]);

		i++;
	}


	return 0;
}
