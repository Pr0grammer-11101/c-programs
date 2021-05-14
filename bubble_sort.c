#include<stdio.h>

int bubble_srt(int[], int);

int main(void)
{
	int a[20], size, i=0;

	printf("Enter the size of the array: ");
	scanf("%d", &size);

	printf("Enter the elements into the array: \n\n");

	while(i<size)
	{
		scanf("%d", &a[i]);
		i++;
	}

	bubble_srt(a, size);

	return 0;
}

int bubble_srt(int a[], int size)
{
	int i, j, temp;

	i=0;
	while(i<size)
	{
		j=0;
		while(j<size-1)
		{
			if(a[j]>a[j+1])
			{
				temp = a[j];
				a[j] = a[j+1];
				a[j+1] = temp;
			}

			j++;
		}

		i++;
	}

	printf("Printing the sorted array: \n\n");

	i=0;

	while(i<size)
	{
		printf("%d\n", a[i]);

		i++;
	}

	return 0;
}
