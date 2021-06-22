#include<stdio.h>

int sum_of_rows_columns(int[][30], int, int, int, int);

int main(void)
{
	int a[30][30], r, c, i, j;

	printf("Enter the number of rows of the matrix: ");
	scanf("%d", &r);

	printf("\nEnter the number of columns of the matrix: ");
	scanf("%d", &c);

	printf("\nEnter the elements into the matrix: \n");
	i=0;
	while(i<r)
	{
		j=0; 
		while(j<c)
		{
			printf("a[%d][%d]: ", i, j);
			scanf("%d", &a[i][j]);
			j++;
		}
		i++;
	}

	sum_of_rows_columns(a, r, c, 0,0);

	return 0;
}

int sum_of_rows_columns(int a[][30], int r, int c, int sr, int sc)
{
	int i, j;

	i=0;
	while(i<r) // sum of rows
	{
		j=0;
		while(j<c)
		{
			sr+=a[i][j];
			
			j++;
			if(j==c)
			{
				a[i][j]=sr;
			}
		}
		sr=0;
		i++;
	}
	c+=1;

	i=0;
	while(i<c)
	{
		j=0;
		while(j<r)
		{
			sc+=a[j][i];
			
			j++;
			if(j==r)
			{
				a[j][i]=sc;
			}
		}
		sc=0;

		i++;
	}

	r+=1;

	printf("\nPrinting the resultant matrix:\n\n");

	i=0;
	while(i<r)
	{
		j=0;
		while(j<c)
		{
			printf("%d\t", a[i][j]);
			j++;
		}

		printf("\n");
		i++;
	}

	return 0;
}