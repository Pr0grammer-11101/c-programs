#include<stdio.h>

int sort(int[], int);

int main(void)
{
	int a[30], size, i, j, large=0, count=1, b[30], k=0;
	
	printf("Enter the size of the array: ");
	scanf("%d", &size);
	
	printf("Enter the elements into the array:\n");
	i=0;
	while(i<size)
	{
		scanf("%d", &a[i]);
		i++;
	}
	
	sort(a, size);
	
	//count and store the frequencies
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
	
	//compare the rest of the frequencies with the greatest frequency in order to find the element with the highest frequency
	i=0;
	count=1;
	while(i<size)
	{
		j=i+1;
		while(j<size)
		{
			if(i==j)
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
		
		if(count==large)
		{
			printf("\n\n\n%d is the most frequent element in the array.....\n\n", a[i]);
			break;
		}
		
		i++;
		count=1;
	}
	
	return 0;
}

int sort(int a[], int s)
{
	int i, j, temp;
	//bubble sort
	i=0;
	while(i<s)
	{
		j=0;
		while(j<s-1)
		{
			if(a[j]>a[j+1])
			{
				temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
			}
			j++;
		}
		i++;
	}
	
	printf("\n\nTHE SORTED ARRAY IS:\n\n");
	i=0;
	while(i<s)
	{
		printf("%d\n", a[i]);
		i++;
	}
	
	return 0;
}