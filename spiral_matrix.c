#include<stdio.h>

// CREDIT:  https://www.youtube.com/watch?v=TmweBVEL0I0&t=934s

int print_spiral(int, int);

int main(void)
{
	int r, c;

	printf("Enter number of rows of the matrix: ");
	scanf("%d", &r);

	printf("Enter number of columns of the matrix: ");
	scanf("%d", &c);

	print_spiral(r, c);

	return 0;
}


int print_spiral(int r, int c)
{
	int a[30][30], i, k, l, last_row=r-1, last_col=c-1;

	printf("Enter elements into the array:\n\n");

	k=0;

	while(k<r)
	{
		l=0;
		while(l<c)
		{
			scanf("%d", &a[k][l]);
			l++;
		}

		k++;
	}


	printf("\n\n\nPrinting the matrix spirally:\n\n\n");

	k=l=0;

	while(k<=last_row && l<=last_col)
	{
		// <first_row>
		for(i=l; i<=last_col; i++)
		{
			printf("%d\n", a[k][i]);
		}

		k++;
		// </first_row>

		// <last_column>
		for(i=k; i<=last_row; i++)
		{
			printf("%d\n", a[i][last_col]);
		}
		last_col--;
		// </last_column>

		// <last_row>
		if(k<=last_row)
		{
			for(i=last_col; i>=l; i--)
			{
				printf("%d\n", a[last_row][i]);
			}
			last_row--;
		}
		// </last_row>

		// <first_column>
		if(l<=last_col)
		{
			for(i=last_row; i>=k; i--)
			{
				printf("%d\n", a[i][l]);
			}
			l++;
		}
		// </first_column>

	}

	return 0;
}