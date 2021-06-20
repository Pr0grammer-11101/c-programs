#include<stdio.h>

int row_reverse(int[][30], int);

int main(void)
{
	int a[30][30], size, i, j;
	
	printf("Enter the number of rows and columns of the matrix: ");
	scanf("%d", &size);
	
	printf("Enter the elements into the matrix:\n");
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
	

	row_reverse(a, size);
	return 0;
}

int row_reverse(int a[][30], int s)
{
	int i, j, m, temp;
	
	
	
	
	m=0;
	while(m<s)  // LOOP FOR SORTING THE MATRIX COLUMN-WISE
	{
		i=0;
		while(i<s)
		{
			j=0;
			while(j<s-1)
			{
				if(a[j][i]>a[j+1][i])
				{
					temp=a[j][i];
					a[j][i]=a[j+1][i];
					a[j+1][i]=temp;
				}
				j++;
			}
			i++;
		}
		m++;
	}
	
	printf("\nThe matrix after sorting it column-wise:\n");
	
	i=0;
	while(i<s)
	{
		j=0;
		while(j<s)
		{
			printf("%d", a[i][j]);
			j++;
		}
		printf("\n");
		i++;
	}
	
	
	
	m=0;
	while(m<s)  // LOOP FOR ARRANGING THE ROWS OF THE MATRIX IN DESCENDING ORDER
	{
		i=0;
		while(i<s)
		{
			j=0;
			while(j<s-1)
			{
				if(a[j][i]<a[j+1][i])
				{
					temp=a[j][i];
					a[j][i]=a[j+1][i];
					a[j+1][i]=temp;
				}
				j++;
			}
			i++;
		}
		m++;
	}
	
	printf("\nThe matrix after reversing its rows:\n\n");
	
	i=0;
	while(i<s)
	{
		j=0;
		while(j<s)
		{
			printf("%d", a[i][j]);
			j++;
		}
		printf("\n");
		i++;
	}
	
	return 0;
}