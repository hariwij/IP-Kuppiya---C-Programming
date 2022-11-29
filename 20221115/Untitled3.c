#include<stdio.h>
#include<string.h>


int main(void)
{
	int arr[3][4]=
	{
		{1,2,3,4},
		{5,6,7,8},
		{9,10,11,12}
	};
	int r,c;
	
	for(r=0;r<3;r++){
		for(c=0;c<4;c++){
			arr[r][c]*=2;
		}
	}
	
	printf("\nAfter :\n ");
	for(r=0;r<3;r++){
		for(c=0;c<4;c++){
			printf("%d\t",arr[r][c]);
		}
		printf("\n");
	}
	
	
	return 0;
}




