#include<stdio.h>

int pattern_print(int, int);

/*1234
 *123
 *12
 *1

 could be of any height
*/

int main(void)
{
	int height;

	printf("Enter the height of the right triangle: ");
	scanf("%d", &height);

	pattern_print(height, height);

	return 0;
}

int pattern_print(int h, int var)
{
	int i=1;
	
	if(var == 1)
	{
		printf("%d ", i);
		return 0;
	}

	while(i<=var)
	{
		printf("%d ", i);
		i++;
	}

	printf("\n");
	var--;
	pattern_print(h, var);

	return 0;
}
