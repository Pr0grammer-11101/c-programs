#include<stdio.h>

int nCk(int, int);

void main()
{
	int s, n, k, r, a[30][30];

	printf("Enter the height of the Pascal's Triangle: ");
	scanf("%d", &s);

	n=0;

	while(n<s)
	{
		k=0;
		while(k<=n)
		{
			r=nCk(n, k);

			a[n][k]=r;

			k++;
		}

		n++;
	}

	printf("\nTHe Pascal's Triangle is:\n\n");

	n=0;

	while(n<s)
	{
		k=0;

		while(k<=n)
		{
			printf("%d ", a[n][k]);

			k++;
		}

		printf("\n");

		n++;
	}


	
}


int nCk(int n, int k)
{
	int fact_n=1, fact_k=1, fact_n_k=1, diff, result, i;

	diff=n-k;

	i=n;

	while(i!=0)
	{
		fact_n*=i;

		i--;
	} // n!

	i=k;

	while(i!=0)
	{
		fact_k*=i;

		i--;
	} // k!

	i=diff;

	while(i!=0)
	{
		fact_n_k*=i;

		i--;
	} // (n-k)!

	result=fact_n/(fact_k*fact_n_k); // n!/k!(n-k)!

	return result;
}
