#include <stdio.h>

int main(void){
	// declare variables
	char category;
	double basic_salary,bonus;
	
	// input
	printf("Enter Category : ");
	category=getchar();
	
	printf("Enter balsic salary : ");
	scanf("%lf", &basic_salary);
	
	//calculation

	if(category=='A' || category=='a'){
		bonus=basic_salary/100*5;
	}
	else if(category=='B' || category=='b'){
		bonus=basic_salary/100*10;
	}
	else if(category=='C' || category=='c'){
		bonus=basic_salary/100*15;
	}
	else{
		printf("Invalid category!\n");
	}

//	switch(category){
//		case 'A':
//			bonus=basic_salary/100*5;
//			break;
//		case 'a':
//			bonus=basic_salary/100*5;
//			break;
//			
//		case 'B':
//			bonus=basic_salary/100*10;
//			break;
//		case 'b':
//			bonus=basic_salary/100*10;
//			break;
//			
//		case 'C':
//			bonus=basic_salary/100*15;
//			break;
//		case 'c':
//			bonus=basic_salary/100*15;
//			break;
//			
//			
//		default:
//			printf("Invalid category!\n");
//			break;
//	}
	
	//output
	printf("Bonus : %.2lf",bonus);
	
	return 0;
}
