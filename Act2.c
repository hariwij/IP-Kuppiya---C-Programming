#include <stdio.h>

 int main (void){
 	
 	// declare variables
 	int customer_type;
 	double bill_amount, final_amout, discount_amount;
 	
 	// get user inputs
 	
 	printf("Customer Type:");
 	scanf("%d",&customer_type); // input customer type
 	
 	printf("Bill Amount: Rs. ");
 	scanf("%lf",&bill_amount);
 	
 	// calculation
 	
 	if(customer_type==1){
 		if(bill_amount<=2500){
 			discount_amount=bill_amount/100*5;
		 }else discount_amount=bill_amount/100*10;
	 }else{
	 	if(bill_amount>5000){
	 		discount_amount=bill_amount/100*10;
		 }
	 }
	final_amout= bill_amount-discount_amount;
	// display results
	printf("Discount Amount: Rs. %.2lf\n",discount_amount);
	printf("Final Bill Amount: Rs. %.2lf\n",final_amout);
	
	
 	return 0;
 }
