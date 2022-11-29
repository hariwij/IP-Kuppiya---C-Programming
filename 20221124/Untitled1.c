#include<stdio.h>
int main()
{
	int arrNum[6]={0};
	int i,j,tmp,isinascending=1;
	
	printf("Enter values to the array :\n");
	for(i=0;i<6;i++)
	{
		scanf("%d",&arrNum[i]);
	}
	
	for(i=0;i<5;i++)
	{
		if(arrNum[i]>arrNum[i+1]){
			isinascending=0;
		}
	}
	if(isinascending==1)printf("ascending order");
	else{
		printf("not in ascending order\n");
		// sorting an array
		for(j=0;j<6;j++){
			for(i=0;i<6-j;i++){
				if(arrNum[i]>arrNum[i+1]){
					tmp=arrNum[i];
					arrNum[i]=arrNum[i+1];
					arrNum[i+1]=tmp;
				}
			}
		}
		for(i=0;i<6;i++)
		{
			printf("%d ", arrNum[i]);
		}
	} 
	
	return 0;
}
