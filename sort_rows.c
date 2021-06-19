#include<stdio.h>


//row-wise sorting......
int sort_row_wise(int);

int main(void)
{
	int size;
	
	printf("Enter the number of rows and columns of the matrix: ");
	scanf("%d", &size);
	
	sort_row_wise(size);
	
	return 0;
	
}

int sort_row_wise(int s)
{
	int a[30][30], i, j;
	
	i=0;
	
	printf("Enter elements into the matrix:\n\n");
	while(i<s)
	{
		j=0;
		while(j<s)
		{
			scanf("%d", &a[i][j]);
			j++;
		}
		i++;
	}
	
	printf("Sorting the matrix row wise..\n\n");
	
	int m, n, temp, small=a[0][0], index;
	
	i=0, m=0;
	// sorting using bubble sort
	while(m<s)
	{
		i=0;
		while(i<s)
		{
			j=0;
			while(j<s-1)
			{
				if(a[m][j]>a[m][j+1])
				{
					temp=a[m][j];
					a[m][j]=a[m][j+1];
					a[m][j+1]=temp;
				}
				j++;
			}
			i++;
		}
		m++;
	}
	
	printf("\nThe matrix after sorting it row-wise...\n\n");
	
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