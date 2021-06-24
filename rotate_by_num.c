#include<stdio.h>

int rotate(int[], int);

int main(void)
{
	int a[30], size, i;

	printf("Enter the size of the array: ");
	scanf("%d", &size);

	printf("Enter elements into the array: \n\n");

	i=0;

	while(i<size)
	{
		scanf("%d", &a[i]);
		i++;
	}

	rotate(a, size);

	return 0;
}

int rotate(int a[], int s)
{
	int num, i=0, j=0, temp;
	printf("From which index do you want to rotate the array(0-%d): ", s-1);
	scanf("%d", &num);

	if(num<0 || num>=s)
	{
		printf("\nInvalid index!!!\n\n");
	}

	else
	{
		while(j<=num)
		{
			i=0;
			while(i<s-1)
			{
				temp=a[i];
				a[i]=a[i+1];
				a[i+1]=temp;
				i++;
			}

			j++;
		}

		printf("\nPrinting the array after rotating it from %d index....\n\n", num);

		i=0;
		while(i<s)
		{
			printf("%d  ", a[i]);
			i++;
		}

	}

	return 0;
}
