#include<stdio.h>

//CODE DEVELOPED COMPLETELY BY MY OWN THINKING SKILLS
//LOGIC IS THE SAME COMPARE ELEMENT FROM 1ST TO LAST ELEMENT IN THE 1ST PASS
//2ND PASS, COMPARE ELEMENT FROM INDEX 1 TO LAST ELEMENT.... AND SO ON

int S_sort(int[], int);

int main(void)
{
	int size;
	printf("Enter length of the array: ");
	scanf("%d", &size);

	int a[size], i=0;

	printf("Enter elements into the array:\n\n");

	while(i<size)
	{
		scanf("%d", &a[i]);
		i++;
	}

	printf("Applying selection sort---------------\n\n");

	S_sort(a, size);



	return 0;
}

int S_sort(int a[], int s)
{
	int i=0, small, j=0, index, temp;

	while(j<s)
	{
		i=j;
		small = a[j];

		while(i<s)
		{
			if(a[i]<small)
			{
				small = a[i];
			}

			i++;
		}

		i=0;
		while(i<s)
		{
			if(small == a[i]) //RETRIEVING THE INDEX OF THE SMALLEST ELEMENT IN THE ARRAY
			{
				index = i;
				break;
			}
			i++;
		}

		temp = a[j];      
		a[j] = small;
		a[index] = temp;
		
		j++;
	}

	i=0;

	while(i<s)
	{
		printf("%d\n", a[i]);

		i++;
	}

	return 0;
}
