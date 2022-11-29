#include <stdio.h>
#include <assert.h>

void printsq(int size);
int max(int a,int b);

// create a function called 'printsq'
int main(void) 
{
	int v;
	printf("Enter value : ");
	scanf("%d",&v);
	
	assert(v<10);
	
	printsq(v);
	
   	return 0;
}

void printsq(int size)
{
	int r,c; 
	 for(r=0;r<size;r++)
	 {
	 	for(c=0;c<size;c++)
	 		printf("*");
	 	printf("\n");
	 }
}

int max(int a,int b){
	return a>b?a:b;
}

