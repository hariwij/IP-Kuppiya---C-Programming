#include<stdio.h>
int main()
{
	char cAns[6]={'T','F','F','T','F','T'};
	char sAns[6];
	int correctans=0,i;
	
	printf("Enter student answers :\n");
	for(i=0;i<6;i++)
	{
		scanf(" %c",&sAns[i]);
		if(cAns[i]==sAns[i]){
			correctans++;
		}
	}
	printf("Correct answers :\n");
	for(i=0;i<6;i++)
	{
		printf("%c ",cAns[i]);
	}
	printf("\nStudent answers :\n");
	for(i=0;i<6;i++)
	{
		printf("%c ",sAns[i]);
	}
	
	printf("\nCorrect answers : %d",correctans);
	
	
	return 0;
}
