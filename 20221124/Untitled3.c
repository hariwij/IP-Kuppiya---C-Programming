#include<stdio.h>
int main()
{
	int boxes[4][3];
	int b;
	
	for(b=0;b<4;b++)
	{
		printf("Enter box %d information.\n",b+1);
		
		printf("Length : ");
		scanf("%d",&boxes[b][0]);
		
		printf("Width : ");
		scanf("%d",&boxes[b][1]);	
		
		printf("Height : ");
		scanf("%d",&boxes[b][2]);
		
		printf("\n");	
	}
	for(b=0;b<4;b++)
	{
		printf("Volume of the box %d is : %d\n",b+1,boxes[b][0]*boxes[b][1]*boxes[b][2]);
	}
	
	return 0;
}
