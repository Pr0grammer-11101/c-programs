#include<stdio.h> 

int array_reverse(int[], int);

int main(void)
{
	int a[30], size, i;

	printf("Enter the size of the array: ");
	scanf("%d", &size);

	printf("Enter the elements into the array:\n");

	i=0;

	while(i<size)
	{
		scanf("%d", &a[i]);
		i++;
	}
	i=size-1;

	printf("\nPrinting the reverse array:\n\n");
	array_reverse(a, i);
	return 0;
}

int array_reverse(int a[], int s)
{
	
	if(s==0)
	{
		printf("%d", a[s]);
		return 0;
	}

	printf("%d\n", a[s]);
	s--;

	array_reverse(a, s);
	return 0;

}