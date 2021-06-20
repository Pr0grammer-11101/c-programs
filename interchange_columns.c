#include<stdio.h>

int main(void)
{
	int a[30][30], size, i, j, temp;
	
	printf("Enter the number of rows and columns of the matrix: ");
	scanf("%d", &size);
	
	printf("Enter elements into the matrix:\n\n");
	
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
	
	printf("\nThe matrix is:\n");
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
	j=0;
	while(j<size)
	{
		temp=a[j][i];
		a[j][i]=a[j][size-1];
		a[j][size-1]=temp;
		j++;
	}
	
	printf("\nThe matrix after interchanging the first column with the last column...\n\n");
	
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
	
	return 0;
}