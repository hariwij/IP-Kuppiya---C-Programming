#include<stdio.h>

//**
//**
//
//****
//****
//****
//****
//
//******
//******
//******
//******
//******
//******

// using loop and a function
// function name = 'printStars'

void printStars(int n);

int main()
{
	printStars(2);
	printStars(4);
	printStars(6);
	printStars(8);
	return 0;
}

void printStars(int n)
{
	int r,c;
	
	for(r=0;r<n;r++)
	{
		for(c=0;c<n;c++)
		{
			printf("*");
		}
		printf("\n");
	}
	printf("\n");
}


