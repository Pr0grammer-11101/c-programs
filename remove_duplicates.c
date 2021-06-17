#include<stdio.h>

int return_index(int[], int);

int main(void)
{
	int a[30], size, i, finish=1, j, index;

	printf("Enter the size of the array: ");
	scanf("%d", &size);

	printf("Enter the elements into the array:\n\n");

	i=0;

	while(i<size)
	{
		scanf("%d", &a[i]);
		i++;
	}

	i=0;
	while(i<size)
	{
		j=i+1;
		while(j<size)
		{
			if(i==j)
			{
				j++;
			}

			else
			{
				if(a[i]==a[j])
				{
					a[j]=0;
				}
				j++;
			}


		}

		i++;
	}

	while(1)
	{
		j=0;
		while(j<size)
		{
			if(a[j]==0)
			{
				finish=0;

				break;
			}



			j++;

		}

		if(finish==0)
		{
			index=j;
			while(index<size-1)
			{
				a[index]=a[index+1];
				index++;
			}

			size--;
			finish=1;

		}

		else
		{
			break;
		}
	}

	printf("\nPrinting the array after removing the duplicate elements:\n\n");

	i=0;

	while(i<size)
	{
		printf("%d\n", a[i]);
		i++;

	}

	return 0;

}
