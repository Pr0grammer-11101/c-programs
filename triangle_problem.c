#include<stdio.h>

int main(void)
{
	int num, size;

	printf("How many triangles?");
	scanf("%d", &num);
	size=num*3;

	int sides[size], i=0;

	while(i<size)
	{
		scanf("%d", &sides[i]);

		i++;
	}

	return 0;
}
