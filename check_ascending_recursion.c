#include<stdio.h>

int check_array(int[], int, int);

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

	check_array(a, size, 0);

	return 0;
}

int check_array(int a[], int s, int i)
{
	if(a[i]>a[i+1]) // base condition
	{
		printf("\nThe elements in the array are not in strictly ascending order...\n\n");
		return 0;
	}
	if(a[i]<a[i+1])
	{
		i++;
		if(i!=s)
		{
			check_array(a, s, i);
		}

		else
		{
			printf("\nThe elements in the array are strictly in ascending order...\n");
			return 0;

		}
	}


	return 0;
}