#include<stdio.h>
int main()
{
	int myArr[10]={0};
	int i=0,num,count=0;
	
	while(i<10){
		printf("Enter number  %d : ",i+1);
		scanf("%d",&myArr[i]);
		if(myArr[i]>=1&&myArr[i]<=100){
			i++;
		}
	}
	printf("Array : ");
	for(i=0;i<10;i++){
		printf("%d ", myArr[i]);
	}
	printf("\n\nEnter number : ");
	scanf("%d",&num);
	
	for(i=0;i<10;i++)
		if(myArr[i]%num==0)
			count++;
	
	printf("Positive (%d/%d) : %.1f\n",count,10,count/10.0*100.0);
	return 0;
}
