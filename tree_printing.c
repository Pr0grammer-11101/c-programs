#include<stdio.h>

int print_tree(int);

int main(void)
{
	int num;

	printf("Enter a number: ");
	scanf("%d", &num);


	print_tree(num);

	return 0;
}

int print_tree(int num)
{
	int div=2, is_prime=1, i, j, k, space;

	if(num%2==0)
	{
		i=num;
		k=0;
		while(i>0)
		{
			space=0;
			while(space<i)
			{
				printf(" ");
				space++;
			}

			j=0;

			while(j<k*2+1)
			{
				printf("*");
				j++;
			}

			printf("\n");

			i--, k++;
		}

	}

	else if(num%2!=0)
	{
		while(div<num)
		{
			if(num%div==0)
			{
				is_prime=0;
				break;
			}

			div++;
		}

		div=2;

		if(is_prime==1)
		{
			i=num;

			k=0;

			while(i>0)
			{
				space=0;

				while(space<i)
				{
					printf(" ");

					space++;
				}


				j=0;

				while(j<=k)
				{
					printf("* ");
					j++;
				}

				printf("\n");

				i--, k++;
			}

		}

		else
		{
			i=num;
			k=i;
			while(i>=0)
			{
				space=num;
				while(space>=i)
				{
					printf(" ");
					space--;
				}

				j=0;

				while(j<k*2+1)
				{
					printf("*");
					j++;
				}

				printf("\n");

				i--, k--;
			}

		}

	}

	return 0;
}
