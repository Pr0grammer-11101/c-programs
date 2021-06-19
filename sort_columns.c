#include<stdio.h>


//sorting column-wise
int sort_column_wise(int);

int main(void)
{
	int size;
	
	printf("Enter the size of the matrix: ");
	scanf("%d", &size);
	
	sort_column_wise(size);
	
	return 0;
}

int sort_column_wise(int s)
{
	int i, j, temp;
	
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
	
	int m, temp;
	
	m=0;
	
	while(m<s)
	{
		i=0; // performing bubble sort
		while(i<s)
		{
			j=0;
			while(j<s)
			{
				if(a[j][i]>a[j+1][i])
				{
					temp=a[j][i];
					a[j][i]=a[j+1][i];
					a[j+1]=temp;
				}
				
				j++;
			}
			
			i++;
		}
		
		m++;
	}
	
	printf("\nPrinting the array after sorting it column-wise:\n\n");
	
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