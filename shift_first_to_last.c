#include<stdio.h>

int shift_element(int[], int);

void main()
{
	int a[30], size, i;

	printf("Enter the size of the array: ");
	scanf("%d", &size);

	printf("Enter elements into the array:\n\n");

	i=0;
	while(i<size)
	{
		scanf("%d", &a[i]);
		i++;
	}

	shift_element(a, size);


}


int shift_element(int a[], int s)
{
	int i=0, temp;

	while(i<s-1)
	{
		temp=a[i];
		a[i]=a[i+1];
		a[i+1]=temp;
		i++;
	}

	printf("\nPrinting the array after shifting the first element to the last....\n\n");

	i=0;

	while(i<s)
	{
		printf("%d  ", a[i]);
		i++;
	}

	return 0;
}
