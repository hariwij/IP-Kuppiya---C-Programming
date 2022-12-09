#include<stdio.h>

// write a function to calculate sum of elements in the array
// function name = 'calculateSum'
// funtion takes two inputs - int array and size of the array

int calculateSum(int array[] , int size);
float calculateAvg(int array[] , int size);

int main()
{
	int a[5] = { 2 , 4 , 6 , 10 , 12 };
	int s = calculateSum( a , 5 );
	float avg = calculateAvg( a , 5 );
	
	printf("Sum : %d\n",s);
	printf("Avg : %.2f\n",avg);
	
	return 0;
}

int calculateSum(int array[] , int size)
{
	int sum=0;
	int i;
	for(i=0;i<size;i++)
	{
		sum+=array[i];
	}
	return sum;
}

float calculateAvg(int array[] , int size)
{
	int sum=0;
	int i;
	for(i=0;i<size;i++)
	{
		sum+=array[i];
	}
	return (float)sum/size;
}


