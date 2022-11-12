#include<stdio.h>

int main(void){
	
	int no, i;
	
	while(1){
		printf("Enter Number : ");
		scanf("%d", &no);
		
		if(no<0) printf("Invalid Number.\n");		
		else break;
	}
	printf("\n");
	for(i=1;i<=10;i++)
		printf("%d x %d = %d\n",no,i,no*i);
	
	return 0;
}
