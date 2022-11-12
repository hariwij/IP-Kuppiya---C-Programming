#include<stdio.h>

int main(void){
	
	int no=10;
	// while
	while(no<0){
		printf("While - body\n");
	}
	
	printf("While - end\n");
	//do-while
	do{
		printf("Do - body\n");
	}
	while(no<0);
	
	printf("Do - end\n");
	
	return 0;
}
