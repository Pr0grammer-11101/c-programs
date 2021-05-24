#include<stdio.h>

int sort(int[], int[], int, int);
int merge(int[], int[], int, int);

int main(void)
{
	int a[30], b[30], sa, sb, i;

	printf("Enter the size of array a: ");
	scanf("%d", &sa);

	printf("Enter the size of array b: ");
	scanf("%d", &sb);

	printf("\nARRAY a:\n");
	printf("Enter elements-->>\n");

	i=0;

	while(i<sa)
	{
		scanf("%d", &a[i]);
		i++;
	}

	printf("\nARRAY b:\n");
	printf("Enter elements-->>\n");

	i=0;

	while(i<sb)
	{
		scanf("%d", &b[i]);
		i++;
	}

	sort(a, b, sa, sb);

	return 0;
}

int sort(int a[], int b[], int sa, int sb)
{
	int i, j, temp, small, index;

	i=0;
	while(i<sa)
	{
		j=i+1;
		small=a[i];
		index=i;
		while(j<sa)
		{
			if(a[j]<small)
			{
				small=a[j];
				index=j;
			}

			j++;
		}

		temp=a[i];
		a[i]=a[index];
		a[index]=temp;

		i++;
	}

	i=0;
	while(i<sb)
	{
		j=i+1;
		small=b[i];
		index=i;
		while(j<sb)
		{
			if(b[j]<small)
			{
				small=b[j];
				index=j;
			}

			j++;
		}

		temp=b[i];
		b[i]=b[index];
		b[index]=temp;

		i++;
	}

	merge(a, b, sa, sb);

	return 0;
}

int merge(int a[], int b[], int sa, int sb)
{
	int i, j, k, c[30], sc;
	sc=sa+sb;
	i=j=k=0;

	while(i<sa || j<sb)
	{
		if(a[i]<b[j])
		{
			c[k]=a[i];
			k++, i++;
		}

		else if(b[j]<a[i])
		{
			c[k]=b[j];
			k++, j++;
		}
	}


	printf("\nPrinting the sorted merged array:\n\n");

	k=0;
	while(k<sc)
	{
		printf("%d\n", c[k]);
		k++;
	}

	return 0;
}
