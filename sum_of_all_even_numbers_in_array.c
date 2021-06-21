#include<stdio.h>

int sum_of_even_elements(int[], int, int, int);

int main(void)
{
	int a[30], size, i, k=0, b[30], sum;
	printf("Enter the size of the array: ");
	scanf("%d", &size);

	printf("Enter the elements into the array:\n");

	i=0;
	while(i<size)
	{
		scanf("%d", &a[i]);
		i++;
	}

	i=0;
	while(i<size)
	{
		if(a[i]%2==0)
		{
			b[k]=a[i];
			k++;
		}

		i++;
	}



	sum=sum_of_even_elements(b, k, 0, 0);

	printf("\nThe sum of the even numbers of the array is: %d\n", sum);

	return 0;
}


int sum_of_even_elements(int b[], int s, int i, int sum)
{
	

	if(i==s)
	{
		return sum;
	}

	sum+=b[i];
	i++;
	sum_of_even_elements(b, s, i, sum);
}
	