#include <stdio.h>

 int main (void){
 	
//	int - %d
// float - %f
// double - %lf
// char - %c
 	
 	int customer_type, no_of_units;
 	
 	// get inputs from user
 	printf("Customer Type: ");
 	scanf("%d", &customer_type);
 	
 	printf("Number of units: ");
 	scanf("%d", &no_of_units);
 	
 	// process - calculation
 	
 	double total=0;
 	total = no_of_units > 100 ? 100 * 10.0 + (no_of_units - 100) * 30.0 : no_of_units * 10.0;	 
	if(customer_type == 1 && no_of_units > 100)
	 	total=total/100 * 120;
	 
	 // print result
 
	 printf("Monthly charge: Rs.%.2lf" ,total);
 	
 	return 0;
 }
