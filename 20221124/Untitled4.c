#include<stdio.h>
int main()
{
	float size[3][5]={0};
	float avgSize[3]={0};
	int m,i;
	float total;
	
	for(m=0;m<3;m++)
	{
		printf("Enter machines %d information.\n",m+1);
		for(i=0;i<5;i++){
			printf("Enter size %d : ",i+1);
			scanf("%f", &size[m][i]);
		}
	}
	
	for(m=0;m<3;m++)
	{
		total=0;
		for(i=0;i<5;i++){
			total+=size[m][i];
		}
		avgSize[m]=total/5;
	}
	
	for(m=0;m<3;m++)
	{
		printf("Avarage of machine %d is : %.2f\n",m+1,avgSize[m]);
	}
	
	return 0;
}
