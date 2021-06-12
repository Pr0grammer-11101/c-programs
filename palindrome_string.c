#include<stdio.h>

int main(void)
{
	char str[30], compare[30];

	int i, j, are_equal=1, length;

	printf("Enter the length of the string: ");
	scanf("%d", &length);

	printf("Enter the string:\n\n");

	scanf("%s", &str);

	
	j=0, i=length-1;

	while(i>=0)
	{
		compare[j]=str[i];

		i--, j++;
	}

	i=0, j=0;

	while(i>=0)
	{
		if(compare[j]==str[i])
		{
			i--, j++;
		}

		else
		{
			are_equal=0;
			break;
		}
	}

	if(are_equal==1)
		
		printf("\nThe string is Palindrome.....\n\n");

	else
		
		printf("\nThe string is not Palindrome.....\n\n");


	return 0;

}