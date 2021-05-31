#include<stdio.h>

int calculate_nck(int, int); // Pascal's triangle can be displayed in the form of combinations of form nCk, where nCk=n!/(k!*(n-k)!)

int main(void)
{
	int h, n, k, print;

	printf("Enter the height of the Pascal's Triangle: ");
	scanf("%d", &h);

	n=0;
	while(n<h)
	{
		k=0;
		while(k<=n)
		{
			print=calculate_nck(n, k);

			printf("%d ", print);

			k++;
		}


		printf("\n");

		n++;
	}

	return 0;
}

int calculate_nck(int n, int k)
{
	int factorial_n=1, factorial_k=1, factorial_n_k=1, diff_n_k, i, result;

	i=1;

	while(i<=n)  // n!
	{
		factorial_n*=i;

		i++;
	}

	i=1;

	while(i<=k)  // k!
	{
		factorial_k*=i;

		i++;
	}

	diff_n_k=n-k;

	i=1;

	while(i<=diff_n_k)  // (n-k)!
	{
		factorial_n_k*=i;

		i++;
	}

	result=factorial_n/(factorial_k*factorial_n_k);  //  n!/(k!*(n-k)!)

	return result;

}
