#include<stdio.h>
#include<assert.h>

// write a function to find factorial
// function name = 'findFactorial'

int findFactorial(int n);

int main()
{
	assert(findFactorial(0)==1);
	assert(findFactorial(1)==1);
	printf("%d\n",findFactorial(0));

	return 0;
}

int findFactorial(int n)
{
	int fact=1;
	int i;
	
	for(i=1;i<=n;i++)
	{
		fact = fact * i;
	}
	return fact;
}


