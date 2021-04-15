#include<stdio.h>



int main(void)
{
	int _1=0, _2=1, _3, terms, i=0;

	printf("How many terms do you want to see?:"); 
	scanf("%d", &terms);

	printf("%d, %d, ", _1, _2); /*with these two terms already printed, there will be 'terms+2' terms in the 
				      output screen*/
	     

	while(i<terms)
	{
		_3 = _1 + _2;
		printf("%d, ", _3);

		_1=_2;
		_2=_3;
		i++;
	}

	return 0;
}
