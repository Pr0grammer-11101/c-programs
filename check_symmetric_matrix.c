#include<stdio.h> 

void main()
{
	int a[30][30], size, i, j, b[30][30], is_transpose=1;
	printf("Enter the number of rows and columns of the matrix: ");
	scanf("%d", &size);

	printf("Enter elements into the matrix: \n");

	i=0;
	while(i<size)
	{
		j=0;
		while(j<size)
		{
			printf("a[%d][%d]: ", i, j);
			scanf("%d", &a[i][j]);
			j++;
		}

		i++;
	}

	printf("\nPrinting the matrix a:\n");

	i=0;
	while(i<size)
	{
		j=0;
		while(j<size)
		{
			printf("%d", a[i][j]);
			j++;
		}
		printf("\n");

		i++;
	}

	i=0;
	while(i<size)  // b is the transpose of matrix a
	{
		j=0;
		while(j<size)
		{
			b[j][i]=a[i][j];
			j++;
		}

		i++;
	}

	printf("\nPrinting the transpose matrix b:\n");
	i=0;
	while(i<size)
	{
		j=0;
		while(j<size)
		{
			printf("%d", b[i][j]);
			j++;
		}
		printf("\n");

		i++;
	}

	i=0;
	while(i<size)
	{
		j=0;
		while(j<size)
		{
			

			if(b[i][j]!=a[i][j])
			{
				is_transpose=0;
				break;
			}
			j++;
		}
		if(is_transpose==0)
		{
			printf("\nMatrix a is not symmetric matrix..\n\n");
			break;
		
		} 

		else
		{
			printf("\nMatrix a is symmetric matrix..\n\n");
			break;
		}
		
		i++;


	}





}