#include<stdio.h>

int main(void)
{
	int a[30], size, i, j, large, b[30], k=0, count=1;
	
	printf("Enter the size of the array: ");
	scanf("%d", &size);
	
	printf("Enter the elements into the array:\n\n");
	
	i=0;
	while(i<size)
	{
		scanf("%d", &a[i]);
		i++;
	}
	
	//count the frequencies
	
	i=0;
	while(i<size)
	{
		j=i+1; 
		while(j<size)
		{
			if(j==i)
			{
				j++;
			}
			
			else
			{
				if(a[i]==a[j])
				{
					count++;
				}
				j++;
			}
		}
		
		b[k]=count;
		i++, k++;
		count=1;
	}
	
	large=0;
	
	//find the greatest frequency
	i=0;
	while(i<k)
	{
		if(b[i]>large)
		{
			large=b[i];
		}
		i++;
	}
	
	//compare each frequency with the greatest frequency
	
	i=0;
	count=1;
	while(i<size)
	{
		j=i+1;
		while(j<size)
		{
			if(j==i)
			{
				j++;
			}
			
			else
			{
				if(a[j]==a[i])
				{
					count++;
				}
				j++;
			}
		}
		
		if(count==large)
		{
			printf("\n\n\n%d is the most frequent element in the array....\n\n", a[i]);
			break;
		}
		
		i++;
		count=1;
	}
	
	return 0;
}