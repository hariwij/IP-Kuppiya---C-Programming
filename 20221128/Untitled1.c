#include <stdio.h>

int find_power(int n, int p);


// create a function called 'find_power'
int main(void) 
{
	int num=4;
	float power=2;
	int result,i;
	for(i=1;i<10;i++){
		result=find_power(i,power);
		printf("Result : %d\n",result);
	}
   	return 0;
}


int find_power(int n, int p)
{
	int i,res=1;
	for(i=0;i<p;i++)
	{
		res=res*n;
	}
	return res;
}
