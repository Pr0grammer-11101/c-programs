#include<stdio.h> 

int Lsearch(int[], int, int);
int Bsearch(int[], int, int);
int Selection_sort(int[], int);
int Bubble_sort(int[], int);
int insert_element(int[], int, int, int);
int insert_sorted(int[], int, int);




int main(void)
{
	int a[30], size, i, option, element, index, m, n, p, q,  A[30][30], B[30][30], C[30][30], j, k, small, large;
	char ans='y';
	

	while(ans == 'y' || ans == 'Y')
	{
		printf("Choose an option:\n\n");

		printf("1. Linear Search\n");
		printf("2. Binary Search\n");
		printf("3. Selection Sort\n");
		printf("4. Bubble Sort\n");
		printf("5. Insertion into an unsorted array\n");
		printf("6. Insertion into a sorted array\n");
		printf("7. Matrix Multiplication\n");
		printf("8. Find smallest and largest element in an array\n");
		printf(">");
		scanf("%d", &option);

		switch(option)
		{
			case 1:
			
			printf("Enter the size of the array: ");
			scanf("%d", &size);

			printf("Enter the elements into the array:\n\n");
			i=0;
			while(i<size)
			{
				scanf("%d", &a[i]);
				i++;
			}

			printf("Enter element to be searched: ");
			scanf("%d", &element);

			Lsearch(a, size, element);

			break;

			case 2:
			
			printf("Enter the size of the array: ");
			scanf("%d", &size);

			printf("Enter the elements into the array:\n\n");

			i=0;

			while(i<size)
			{
				scanf("%d", &a[i]);

				i++;
			}

			printf("Enter the element to be searched: ");
			scanf("%d", &element);

			Bsearch(a, size, element);

			break;

			case 3:
			printf("Enter the size of the array: ");
			scanf("%d", &size);

			i=0;
			printf("Enter the elements into the array:\n\n");

			while(i<size)
			{
				scanf("%d", &a[i]);
				i++;
			}

			Selection_sort(a, size);

			break;

			case 4:
			printf("Enter the size of the array: ");
			scanf("%d", &size);

			printf("Enter the elements into the array:\n\n");
			i=0;

			while(i<size)
			{
				scanf("%d", &a[i]);
				i++;

			}

			Bubble_sort(a, size);

			break;

			case 5:
			

			printf("Enter the size of the array: ");
			scanf("%d", &size);

			printf("Enter elements into the array:\n\n");
			i=0;

			while(i<size)
			{
				scanf("%d", &a[i]);

				i++;
			}

			printf("Enter the element to be inserted along with its index: ");
			scanf("%d %d", &element, &index);

			insert_element(a, size, element, index);

			break;

			case 6:
			

			printf("Enter the size of the array: ");
			scanf("%d", &size);

			printf("Enter the elements into the array:\n\n");

			i=0;

			while(i<size)
			{
				scanf("%d", &a[i]);
				i++;
			}

			printf("Enter the element to be inserted into the array: ");
			scanf("%d", &element);

			insert_sorted(a, size, element);

			break;

			case 7: 
			

			printf("Enter the number of rows and columns for the first matrix: ");
			scanf("%d-%d", &m, &n);

			printf("Enter the number of rows and columns for the second matrix: ");
			scanf("%d-%d", &p, &q);

			

			if(n == p)
			{
				printf("MATRIX A:\n\n");
				printf("Enter elements:\n\n");

				i=0;

				while(i<m)
				{
					j=0;
					while(j<n)
					{
						scanf("%d", &A[i][j]);
						j++;
					}
					i++;
				}

				printf("MATRIX B:\n\n");

				printf("Enter elements:\n\n");

				i=0;
				while(i<p)
				{
					j=0;
					while(j<q)
					{
						scanf("%d", &B[i][j]);
						j++;
					}

					i++;
				}

				i=j=k=0;

				while(i<m)
				{
					j=0;
					while(j<q)
					{
						C[i][j] = 0;
						k=0;
						while(k<n)
						{
							C[i][j] += A[i][k] * B[k][j];
							k++;

						}

						j++;

					}

					i++;
				}

				printf("\nPrinting the resultant array:\n\n");

				i=j=0;

				while(i<m)
				{
					j=0;
					while(j<q)
					{
						printf("c[%d][%d]: %d ", i, j, C[i][j]);
						j++;
					}

					printf("\n");
					i++;
				}
				
			}

			else
			{
				printf("\nSORRY! THE MATRICES CANNOT BE MULTIPLIED..............\n\n");
			}

			break;

			case 8:
			

			printf("Enter the size of the array: ");
			scanf("%d", &size);

			printf("Enter the elements into the array: \n\n");

			i=0;

			while(i<size)
			{
				scanf("%d", &a[i]);

				i++;
			}

			small = a[0];
			large = a[size-1];

			i=1;

			while(i<size)
			{
				if(a[i]<small)
				{
					small = a[i];
				}

				if(a[i]>large)
				{
					large = a[i];

				}

				i++;

			}

			printf("The smallest element in the array is: %d\n", small);
			printf("The largest element in the array is: %d\n", large);

			break;

			default:
			printf("INVALID OPTION!!!!\n\n");


		}

		printf("\n\nDo you want to continue?");
		scanf(" %c", &ans);
	}
	return 0;
}

int Lsearch(int a[], int size, int item)
{
	int i;

	i=0;

	while(i<size)
	{
		if(item  == a[i])
		{
			printf("Element found at position %d and index %d", i+1, i);

			return 0;
		}

		i++;
	}

	printf("The element is not in the array....");

	return 0;

}

int Bsearch(int a[], int size, int item)
{
	int i, mid, low=size-1, up=0;

	i=0;

	while(i<size)
	{
		mid = (low+up)/2;

		if(item<a[mid])
		{
			up = mid-1;
		}

		if(item>a[mid])
		{
			low = mid+1;
		}

		if(item == a[mid])
		{
			printf("Element found at position %d and index %d", mid+1, mid);
			return 0;
		}

		i++;
	}

	printf("The element is not in the array................\n\n");

	return 0;
}

int Selection_sort(int a[], int size)
{
	int i, j, temp, index, small;

	i=0;

	while(i<size)
	{
		j=i+1;
		index = i;

		small = a[i];

		while(j<size)
		{
			if(a[j]<small)
			{
				small = a[j];
				index = j;
			}

			j++;
		}

		temp = a[i];
		a[i] = a[index];
		a[index] = temp;

		i++;

	}

	printf("Printing the sorted array:\n\n");

	i=0;

	while(i<size)
	{
		printf("%d\n", a[i]);

		i++;
	}

	return 0;
}

int Bubble_sort(int a[], int size)
{
	int i, j, temp;

	i=0;
	while(i<size)
	{
		j=0;
		while(j<size-1)
		{
			if(a[j]>a[j+1])
			{
				temp = a[j];
				a[j] = a[j+1];
				a[j+1] = temp;
			}

			j++;
		}

		i++;
	}

	printf("\nPrinting the sorted array:\n\n");

	i=0;

	while(i<size)
	{
		printf("%d\n", a[i]);

		i++;
	}

	return 0;
}

int insert_element(int a[], int size, int element, int index)
{
	int n, i;

	size+=1;
	n=size-1;

	while(n>index)
	{
		a[n] = a[n-1];

		n--;
	}

	a[index] = element;

	printf("\nPrinting the new array: \n\n");

	i=0;

	while(i<size)
	{
		printf("%d\n", a[i]);

		i++;
	}

	return 0;
}

int insert_sorted(int a[], int size, int element)
{
	int i, j, temp, n, index;

	i=0;
	while(i<size)
	{
		j=0;

		while(j<size-1)
		{
			if(a[j]>a[j+1])
			{
				temp = a[j];
				a[j] = a[j+1];
				a[j+1] = temp;
			}

			j++;
		}

		i++;
	}

	i=0;

	while(i<size-1)
	{
		if(a[i]<element && element<a[i+1])
		{
			index = i+1;
			break;
		}

		i++;
	}

	size+=1;
	n=size-1;

	i=0;

	while(n>index)
	{
		a[n] = a[n-1];
		n--;
	}

	a[index] = element;

	printf("\n\nPrinting the new sorted array:\n\n");

	i=0;

	while(i<size)
	{
		printf("%d\n", a[i]);
		i++;
	}


	return 0;


}
