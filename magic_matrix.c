#include<stdio.h>

void main()
{
	int a[30][30], count=0, square, n, i, j, num=1, sum;



	printf("Enter n: ");
	scanf("%d", &n);

	sum=(n*(n*n)+1)/2;
	square=n*n;

	printf("\n The sum of all the elements of each row and column and diagonal is: %d\n", sum);

	i=0, j=0;

	while(i<n)
	{
		j=0;

		while(j<n)
		{
			a[i][j]=0;

			j++;
		}

		i++;
	}


	if(n%2==0)
	{
		printf("\nMagic matrix doesnot exist for even values of n...\n");

	}

	else
	{
		i=n/2, j=n-1;
		while(count<square)
		{
		
			

		
			if(i==-1 && j==n)
		
			{
			
				i=0;
			
				j=n-2;
		
			}

		
			if(i==-1)
	
			{
			
				i=n-1;
		
			}

		
			if(j==n)
		
			{
			
				j=0;
		
			}

		
			if(a[i][j]!=0)
		
			{
			
				i+=1;
			
				j-=2;
		
			}

			printf("\na[%d][%d] = %d", i, j, num);		
			a[i][j]=num;

		
			count++, num++, i--, j++;
	
		}
	}


	if(n%2==0)
	{
		printf("\n.................................................\n");
	}

	else
	{
		printf("\nPrinting the magic matrix:\n\n");

		i=0;

		while(i<n)
		{
			j=0;

			while(j<n)
			{
				printf("%d   ", a[i][j]);
				j++;

			}

			printf("\n");
			i++;
		}

	}


}
