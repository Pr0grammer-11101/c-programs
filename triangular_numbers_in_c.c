#include<stdio.h>

int triangular_num(int, int, int, int);

int main(void)
{
	int n;

	printf("Enter the position of the triangular number that you want to see ");
	scanf("%d", &n);

	triangular_num(n, 1, 2, 1);

	return 0;
}

int triangular_num(int n, int i, int diff, int count)
{
	if(count == n)
	{
		printf("The triangular number at position %d is: %d", count, i);
		return 0;
	}
	
	i+=diff;
	diff+=1;
	count++;

	triangular_num(n, i, diff, count);
	return 0;
}
