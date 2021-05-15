#include<stdio.h>

int insert_element(int[], int);

int sort(int[], int);

int main(void)
{
	int a[30], size, i;

	printf("Enter the size of the array: ");
	scanf("%d", &size);

	i=0;

	printf("Enter the elements into the array: \n\n");

	while(i<size)
	{
		scanf("%d", &a[i]);
		i++;
	}

	sort(a, size);

	return 0;
}

int sort(int a[], int size)  //BUBBLE SORT
{

	int i, j, temp;
	char ans;

	j=0;
	while(j<size)
	{
		i=0;
		while(i<size-1)
		{
			if(a[i]>a[i+1])
			{
				temp = a[i];
				a[i] = a[i+1];
				a[i+1] = temp;
			}

			i++;
		}

		j++;

	}

	printf("The sorted array is:\n\n");

	i=0;
	while(i<size)
	{
		printf("%d\n", a[i]);
		i++;
	}

	printf("Do you want to insert an element into the array?");
	scanf(" %c", &ans);

	if(ans == 'y' || ans == 'Y')
	{
		insert_element(a, size);
	}

	else
	{
		printf("\n\t\t oooooooooooooooo> No elements inserted into the array <ooooooooooooooooo\n");
	}
	return 0;
}

int insert_element(int a[], int size)
{
	int i, element, index=0, n;

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

	printf("Printing the new sorted array:\n\n");

	i=0;
	while(i<size)
	{
		printf("%d\n", a[i]);
		i++;
	}


	return 0;
}