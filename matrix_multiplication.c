#include<stdio.h>
#define ROW1 3
#define COL1 4
#define COL2 2
int main(void)
{
	int a[ROW1][COL1], b[COL1][COL2], c[ROW1][COL2], i, j, k;

	printf("Enter elements into the array:\n");

	i=0;

	while(i<ROW1)
	{
		j=0;
		while(j<COL1)
		{
			printf("a[%d][%d]: ", i, j);
		
			scanf("%d", &a[i][j]);

			j++;
		}

		i++;
	}

	printf("Enter elements into array b:\n");

	i=0;
	while(i<COL1)
	{
		j=0;
		while(j<COL2)
		{
			printf("b[%d][%d]: ", i, j);
			scanf("%d", &b[i][j]);
			j++;
		}

		i++;
	}

	printf("Multiplying the two arrays...............\n");

	i=k=0;
	while(i<ROW1)
	{
		j=0;
		while(j<COL2)
		{
			c[i][j]=0;

			while(k<COL1)
			{
				c[i][j] += a[i][k]*b[k][j];

				k++;
			}

			k=0, j++;
		}

		i++;
	}

	printf("Displaying the resultant matrix\n\n");

	i=0;

	while(i<ROW1)
	{
		j=0;
		while(j<COL2)
		{
			printf("c[%d][%d]: %d\n", i, j, c[i][j]);

			j++;
		}

		i++;
	}

	return 0;
}
