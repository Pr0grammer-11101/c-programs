#include<stdio.h>

int triangular_num(int, int, int, int);

int main(void)
{
	int n;

	printf("How many triangular numbers do you want? ");
	scanf("%d", &n);

	triangular_num(n, 1, 2, 0);

	return 0;
}

int triangular_num(int n, int i, int diff, int count)
{
	if(count == n)
	{
		return 0;
	}

	printf("%d, ", i);
	
	i+=diff;
	diff+=1;
	count++;

	triangular_num(n, i, diff, count);
	return 0;
}
