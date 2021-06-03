#include<stdio.h>

int convert(int);

int main(void)
{
	int num;

	printf("Enter a positive decimal number: ");
	scanf("%d", &num);

	if(num<0)
	{
		printf("The number that you have entered is unacceptable!!!\n\n");
	}

	else
	{
		convert(num);
	}

	return 0;
}


int convert(int num)
{
	int a[30], i, k=0, temp, replica=num;

	printf("The binary form of %d is: ", num);
	while(replica!=0)
	{
		temp=replica%2;
		a[k]=temp;
		replica/=2;
		k++;
	}

	i=k-1;

	while(i>=0)
	{
		printf("%d", a[i]);
		i--;
	}

	return 0;
}
