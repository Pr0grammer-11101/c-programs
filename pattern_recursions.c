#include<stdio.h>

int print_pattern(int, int);
/*
 * 1
 * 12
 * 123
 * 1234
 * and so on....
 */

int main(void)
{
	int height;

	printf("Enter the height of the right triangle: ");
	scanf("%d", &height);

	print_pattern(height, 0);

	return 0;
}

int print_pattern(int h, int variable)
{
	int i=1, j=variable+1;
	if(j == h)
	{
		while(i<=j)
		{
			printf("%d ", i);
			i++;
		}
		return 0;
	}

	while(i<=j)
	{
		printf("%d ", i);
		
		i++;
	}
	printf("\n");
	variable++;
	print_pattern(h, variable);

	return 0;
}
