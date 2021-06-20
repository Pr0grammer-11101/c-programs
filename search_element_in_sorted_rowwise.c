#include<stdio.h>

int sort_row_wise(int);
int sort_column_wise(int);

//shows searched element where it finds first

int main(void)
{
	int option, size;
	
	printf("Enter the number of rows and columns of the matrix: ");
	scanf("%d", &size);
	printf("Choose one option from the following:\n");
	printf("1. Sort the matrix row-wise and search for an element.\n");
	printf("2. Sort THe matrix column-wise and search for an element.\n");
	
	printf(":/>");
	scanf("%d", &option);
	
	if(option==1)
	{
		sort_row_wise(size);
	}
	
	else  if(option==2)
	{
		sort_column_wise(size);
	}
	
	else
	{
		printf("\nINVALID OPTION!!!\n\n");
	}
	
	return 0;
}

int sort_row_wise(int s)
{
	int a[30][30], i, j, m, temp;
	
	printf("Enter elements into the matrix:\n\n");
	
	i=0;
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
	
	m=0;
	while(m<s)
	{
		i=0;
		while(i<s)
		{
			j=0;
			while(j<s-1)
			{
				if(a[i][j]>a[i][j+1])
				{
					temp=a[i][j];
					a[i][j]=a[i][j+1];
					a[i][j+1]=temp;
				}
				j++;
			}
			i++;
		}
		m++;
	}
	
	printf("\nThe matrix after sorting it row-wise:\n");
	
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
	
	int element;
	
	printf("Enter the element that you want to search...");
	scanf("%d", &element);
	
	printf("Searching.....\n\n");
	i=0;
	while(i<s)
	{
		j=0;
		while(j<s)
		{
			if(a[i][j]==element)
			{
				printf("\n%d is at position a[%d][%d]....\n\n", element, i, j);
				return 0;
			}
			
			j++;
		}
		
		i++;
	}
	
	printf("\n%d is not in the matrix....\n\n", element);
	
	return 0;
}

int sort_column_wise(int s)
{
	int a[30][30], i, j, m, temp;
	
	printf("Enter the elements into the matrix:\n");
	i=0;
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
		
	m=0;
	while(m<s)
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
	
	int element;
	printf("Enter the element to be searched: ");
	scanf("%d", &element);
	
	i=0;
	while(i<s)
	{
		j=0;
		while(j<s)
		{
			if(a[i][j]==element)
			{
				printf("\n%d is at position a[%d][%d]...\n", element, i, j);
				return 0;
			}
			j++;
		}
		i++;
	}
	
	printf("\n%d is not in the matrix....\n", element);
	return 0;
}