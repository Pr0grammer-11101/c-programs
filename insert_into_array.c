#include<stdio.h>

int insert_element(int[], int, char);

int main(void)
{
	int a[20], size, i;
	char ans;

	printf("Enter the size of the array: ");
	scanf("%d", &size);

	i=0;
	printf("Enter the elements into the array:\n\n");

	while(i<size)
	{
		scanf("%d", &a[i]);

		i++;
	}

	printf("Do you want to insert new element? ");
	scanf(" %c", &ans);

	insert_element(a, size, ans);

	return 0;
}

int insert_element(int a[], int size, char ans)
{
	int element, index, n;

	if(ans == 'y' || ans == 'Y')
	{
		printf("Enter the element to be inserted along with its index: ");
		scanf("%d %d", &element, &index);

		size += 1;
		n = size-1;

		while(n>index)
		{
			a[n] = a[n-1];

			n--;
		}

		a[n] = element;
		printf("INSERTION SUCCESSFUL!!!\n\n\n");

		n=0;

		printf("Printing the new array:\n");
		while(n<size)
		{
			printf("%d\n", a[n]);

			n++;
		}

	}

	else
	{
		printf("Printing the array:\n\n");

		n=0;

		while(n<size)
		{
			printf("%d\n", a[n]);

			n++;
		}

	}

	return 0;
}
