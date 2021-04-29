#include<stdio.h>

int pattern(int);
/* pattern:
 * 1
 * 1 2
 * 1 2 3
 * 1 2 3 4
 */

int main(void)
{
	int height;

	printf("Enter the height of the right triangle: ");
	scanf("%d", &height);

	pattern(height);

	return 0;
}

int pattern(int h)
{
	int i=1, j;

	while(i<=h)
	{
		j=1;
		while(j<=i)
		{
			printf("%d ", j);
			j++;
		}

		printf("\n");

		i++;
	}

	return 0;
}
