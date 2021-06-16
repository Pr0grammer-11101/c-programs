#include<stdio.h> 

int insertion_sort(int[], int);

int main(void)
{
	int a[30], size, i;

	printf("Enter the size of the array: ");
	scanf("%d", &size);

	i=0;
	printf("Enter elements into the array:\n\n");

	while(i<size)
	{
		scanf("%d", &a[i]);
		i++;
	}

	insertion_sort(a, size);

	return 0;
	
}

int insertion_sort(int a[], int s)
{
	int i, j, temp;

	i=0;
	while(i<s-1)
	{
		j=i+1;
		while(j>0)
		{
			if(a[j]>a[j-1])
			{
				temp=a[j];
				a[j]=a[j-1];
				a[j-1]=temp;
			}
			j--;
		}

		i++;
	}

	printf("\nPrinting the array in descending order:\n\n");

	i=0;

	while(i<s)
	{
		printf("%d\n", a[i]);
		i++;
	}
	
	return 0;
}
