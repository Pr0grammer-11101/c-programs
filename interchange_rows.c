#include<stdio.h>

void main()
{
	int a[30][30], size, i, j;
	
	printf("Enter the size of the matrix: ");
	scanf("%d", &size);
	
	printf("\nEnter the elements into the matrix:\n");
	
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
	
	printf("\nPrinting the matrix:\n");
	
	int temp;
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
	
	
	
	i=0; // will remain constant
	j=0;
	while(j<size)  // loop for interchanging the first and the last rows
	{
		temp=a[i][j];
		a[i][j]=a[size-1][j];
		a[size-1][j]=temp;
		j++;
	}
	
	printf("\nPrinting the matrix after interchanging its first and last row...\n\n");
	
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
	
}