#include<stdio.h>

int insert_element(int[], int);

int sort(int[], int);

int main(void)
{
	int a[30], size, i;

	printf("Enter the size of the array: ");
	scanf("%d", &size);

	printf("Enter elements into the array:\n");
	i=0;
	while(i<size)
	{
		scanf("%d", &a[i]);
		i++;
	}

	sort(a, size);

	return 0;
}

int sort(int a[], int size)
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

	printf("Printing the sorted array:\n\n");
	i=0;

	while(i<size)
	{
		printf("%d\n", a[i]);

		i++;
	}

	char ans;

	printf("Do you want to insert an element into the array?");
	scanf(" %c", &ans);

	if(ans == 'y' || ans == 'Y')
	{
		insert_element(a, size);

	}

	else
	{
		printf("\n\t\tooooooooooooooooooooo> No element inserted into the array <ooooooooooooooooooooo\n");
	}

	return 0;
}

int insert_element(int a[], int size)
{
	int index=0, i, element, n;

	char ans='y';

	while(ans == 'y' || ans == 'Y')
	{
		printf("Enter the element to be inserted: ");
		scanf("%d", &element);

		i=0;
		while(i<size)
		{
			if(element>a[i] && element<a[i+1])
			{
				index = i+1;
				break;

			}

			i++;
		}

		size+=1;
		n=size-1;
		while(n>index)
		{
			a[n] = a[n-1];
			n--;
		}

		a[index]=element;

		printf("Element inserted into index: %d\n", index);

		printf("Do you want to enter more elements?");
		scanf(" %c", &ans);
	}

	i=0;
	printf("Printing the new sorted array:\n\n");

	while(i<size)
	{
		printf("%d\n", a[i]);
		i++;
	}

	return 0;
}