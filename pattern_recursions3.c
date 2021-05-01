#include<stdio.h>

int print_pattern(int, int);

int main(void)
{
	int height;

	printf("Enter the height of the triangle: "); 
	scanf("%d", &height);

	print_pattern(height, height);

	return 0;
}

int print_pattern(int h, int var)
{
	int i=var;

	if(var == 1)
	{
		printf("%d ", i);

		return 0;
	}

	while(i>=1)
	{
		printf("%d ", i);
		i--;
	}
	
	printf("\n");

	var--;
	print_pattern(h, var);

	return 0;
}
