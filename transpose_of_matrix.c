#include<stdio.h>
#define ROW1 3
#define COL1 4
int main(void)
{
	int a[ROW1][COL1], i, j;

	printf("Enter elements into the array:\n\n");

	i=0;

	while(i<ROW1)
	{
		j=0;
		while(j<COL1)
		{
			printf("a[%d][%d]: ", i, j);
			scanf("%d", &a[i][j]);
			++j;
		}

		++i;
	}

	printf("Displaying the matrix you created.......\n");

	i=0;
	while(i<ROW1)
	{
		j=0;
		while(j<COL1)
		{
			printf("%d ", a[i][j]);

			++j;
		}

		printf("\n");

		++i;
	}

	printf("Transposing the matrix.........\n\n");

	i=0;
	while(i<COL1)
	{
		j=0;
		while(j<ROW1)
		{
			printf("%d ", a[j][i]);

			++j;
		}

		printf("\n");

		++i;
	}

	return 0;
}
