#include<stdio.h>

int columns_reverse(int[][30], int);

int main(void)
{
	int a[30][30], size, i, j;
	printf("Enter the number of rows and columns of the matrix: ");
	scanf("%d", &size);

	printf("Enter the elements into the matrix:\n\n");

	i=0;
	while(i<size)
	{
		j=0;
		while(j<size)
		{
			scanf("%d", &a[i][j]);
			j++;
		}

		i++;
	}

	printf("\nThe matrix is: \n");
	
	columns_reverse(a, size);

	return 0;
}

int columns_reverse(int a[][30], int s)
{
	int i, j, m, temp;

	m=0;
	while(m<s)  //LOOP TO SORT THE MATRIX ROW-WISE
	{
		i=0;
		while(i<s)
		{
			j=0;
			while(j<s-1)
			{
				if(a[i][j]>a[i][j+1])
				{
					temp=a[i][j];
					a[i][j]=a[i][j+1];
					a[i][j+1]=temp;
				}

				j++;
			}

			i++;
		}

		m++;
	}

	printf("\nThe matrix after sorting it row-wise:\n\n");
	i=0;
	while(i<s)
	{
		j=0;
		while(j<s)
		{
			printf("%d ", a[i][j]);
			j++;
		}

		printf("\n");
		i++;
	}

	m=0;
	while(m<s)  //LOOP TO REARRANGE THE COLUMNS IN DESCENDING ORDER
	{
		i=0;
		while(i<s)
		{
			j=0;
			while(j<s-1)
			{
				if(a[i][j]<a[i][j+1])
				{
					temp=a[i][j];
					a[i][j]=a[i][j+1];
					a[i][j+1]=temp;
				}

				j++;
			}

			i++;
		}
		m++;
	}

	printf("\nThe matrix after arranging its columns in descending order:\n\n");

	i=0;
	while(i<s)
	{
		j=0;
		while(j<s)
		{
			printf("%d ", a[i][j]);
			j++;
		}

		printf("\n");
		i++;
	}

	return 0;
}