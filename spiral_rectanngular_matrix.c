#include<stdio.h>

int print_spiral(int[][30], int, int);

int main(void)
{
	int r, c, a[30][30], i, j;

	printf("Enter the number of rows of the matrix: ");
	scanf("%d", &r);
	printf("Enter the number of columns of the matrix: ");
	scanf("%d", &c);

	if(r==c)
	{
		printf("Sorry! But the matrix should be a rectangular one......\n\n");

	}

	else
	{
		printf("Enter the elements into the array:\n\n");

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


		print_spiral(a, r, c);
	}

	return 0;
}


int print_spiral(int a[][30], int r, int c)
{
	int i, last_row=r-1, last_col=c-1, l=0, k=0;

	printf("\nPrinting the rectangular matrix spirally....\n");

	while(k<=last_row && l<=last_col)
	{


		for(i=l; i<=last_col; i++) // first row
		{

			printf("%d\n", a[k][i]);

		}
		k++;

		for(i=k; i<=last_row; i++) // last column
		{
			printf("%d\n", a[i][last_col]);

		}

		last_col--;
		if(k<=last_row)
		{
			for(i=last_col; i>=l; i--) // last row
			{
				printf("%d\n", a[last_row][i]);

			}
			last_row--;
		}

		if(l<=last_col)
		{

			for(i=last_row; i>=k; i--) // first column
			{
				printf("%d\n", a[i][l]);
			}
			l++;
		}
	}

	return 0;


}