#include<stdio.h>

int initialize_spiral(int, int);

int main(void)
{
	int r, c;

	printf("Enter the number of rows of the matrix: ");
	scanf("%d", &r);
	printf("Enter the number of columns of the matrix: ");
	scanf("%d", &c);

	if(r==c)
	{
		initialize_spiral(r, c);
	}

	else
	{
		printf("\nThe Spiral matrix should be a square one....\n\n");
	}

	return 0;
}

int initialize_spiral(int r, int c)
{
	int a[30][30], i, l, k, last_row=r-1, last_col=c-1, num=1;

	k=l=0;
	while(k<=last_row && l<=last_col)
	{
		for(i=l; i<=last_col; i++)
		{
			a[k][i]=num;
			num++;
		}  // first row intialized
		k++;

		for(i=k; i<=last_row; i++)
		{
			a[i][last_col]=num;
			num++;
		}  // last column initialized
		last_col--;

		if(k<=last_row)
		{

		
			for(i=last_col; i>=l; i--)
		
			{
			
				a[last_row][i]=num;
			
				num++;
		
			}  // last row initialized
			last_row--;
		}

		if(l<=last_col)
		{
			for(i=last_row; i>=k; i--)
			{
				a[i][l]=num;
				num++;
			}  // first column initialized
			l++;
		}

	}

	printf("\nPrinting the spiral matrix.....\n\n");

	k=l=0;
	while(k<r)
	{
		while(l<c)
		{
			printf("%d\t", a[k][l]);
			l++;
		}
		l=0;
		printf("\n");
		k++;
	}

	return 0;
}
