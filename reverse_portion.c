#include<stdio.h>

int reverse(int[], int);

int main(void)
{
	int a[30], size, i;

	printf("Enter the size of the array: ");

	scanf("%d", &size);

	printf("Enter elements into the array:\n");

	i=0;

	while(i<size)
	{
		scanf("%d", &a[i]);
		i++;
	}

	reverse(a, size);

	return 0;
}


int reverse(int a[], int s)
{
	int i, r;

	r=s/2;

	while(r>=0)
	{
		printf("%d ", a[r]);
		r--;
	}

	i=s/2+1;

	while(i<s)
	{
		printf("%d ", a[i]);
		i++;
	}

	return 0;
}
