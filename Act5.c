#include <stdio.h>

 int main (void){
 	
 	// declare variables
 	int course_no, marks;
 	double course_fee,discount;

 	// get user inputs
 	
 	printf("Course no: ");
 	scanf("%d", &course_no);
 	
 	printf("Aptitide test marks: ");
 	scanf("%d", &marks);
 		
 	// calculation
 	
 	 if(course_no==1){
 		course_fee=150000.0;
	 }
	 else if(course_no==2){
 		course_fee=175000.0;
	 }
 	
 	
 	 if(marks>=80){
 		discount=course_fee/100*7.5;
	 }

 	
	// display results
	printf("Discount: %.2lf\n",discount);
	printf("Course fee: %.2lf\n", course_fee-discount);
	
 	return 0;
 }
