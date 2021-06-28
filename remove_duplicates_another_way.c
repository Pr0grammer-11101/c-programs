#include<stdio.h>

// remove DUPLICATES from sorted arrays

int sort(int[], int);
int remove_dup(int[], int);


int main(void)
{
	int a[30], size, i;

	printf("Enter the size of the array: ");
	scanf("%d", &size);

	printf("\nEnter elements into the array:\n\n");

	i=0;
	while(i<size)
	{
		scanf("%d", &a[i]);
		i++;
	}

	printf("\nThis is your array:\n\n");

	i=0;
	while(i<size)
	{
		printf("%d ", a[i]);
		i++;
	}

	sort(a, size);

	return 0;
}

int sort(int a[], int s)
{
	int i, j, small, index, temp;

	//PERFORMING SELECTION SORT

	i=0;
	while(i<s-1)
	{
		j=i+1;

		small=a[i];
		index=i;

		while(j<s)
		{
			if(a[j]<small)
			{
				small=a[j];
				index=j;
			}
			j++;
		}

		temp=a[i];
		a[i]=a[index];
		a[index]=temp;

		i++;

	}

	printf("\nThe sorted array is:\n\n");

	i=0;
	while(i<s)
	{
		printf("%d ", a[i]);
		i++;
	}

	remove_dup(a, s);

	return 0;
}

int remove_dup(int a[], int s)
{
	int i, j, n;
	n=s;

	i=0;
	while(i<s)  // re-initializing the duplicates to 0
	{
		j=i+1;
		while(j<s)
		{
			if(j==i)
			{
				j++;

			}

			else if(a[j]==a[i])
			{
				a[j]=0;
				j++;
			}

			else
			{
				j++;
			}
		}

		i++;
	}

	while(s!=0) // removing the zero initialized duplicates
	{
		i=0;
		while(i<n)
		{
			if(a[i]==0)
			{
				j=i;
				while(j<n-1)
				{
					a[j]=a[j+1];
					j++;
				}

				n--;
				break;
			}

			i++;

		}

		s--;
	}

	printf("\nThe array after removing the duplicates.....\n\n");

	i=0;
	s=n;
	while(i<s)
	{
		printf("%d ", a[i]);
		i++;
	}

	return 0;
}