#include<stdio.h>

int main(void)
{
	int a[30][30], i, j, n, nm=2, num=2, is_prime=1;

	printf("n:>");
	scanf("%d", &n);

	i=0;
	while(i<n)
	{
		j=0;
		while(j<n)
		{
			a[i][j]=nm++; //postfix incrementation: same as a[i][j]=nm; nm++;
			j++;
		}

		i++;
	}

	printf("\n\n\nFollowing is Sieve of Eratosthenes:\n\n\n");

	i=0;
	while(i<n)
	{
		j=0;
		while(j<n)
		{
			while(num<a[i][j])
			{
				if(a[i][j]%num==0)
				{
					is_prime=0;
					break;
				}

				num++;
			}

			if(is_prime==1)
			{
				printf("%d   ", a[i][j]);

				num=2;
			}

			else
			{
				printf("X   ");
				is_prime=1;
				num=2;
			}

			j++;
		}

		printf("\n\n\n");
		i++;
	}


	return 0;
}
