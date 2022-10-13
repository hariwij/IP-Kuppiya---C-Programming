#include <stdio.h>

 int main (void){
 	
 	// declare variables
	int book_type, no_of_days;
	double fine, total,book_price_per_day;

 	// get user inputs
 	
 	printf("Book Type: ");
 	scanf("%d", &book_type);
 	
 	printf("Rented days: ");
 	scanf("%d", &no_of_days);
 		
 	// calculation
 	
 	 if(book_type==1){
 	 	book_price_per_day=10.0;
	 }
	 else {
	 	book_price_per_day=8.0;
	 }
	 
	total=no_of_days*book_price_per_day;
 	
 	if(no_of_days>14){
 		fine=total/100*10;
	 }

	// display results
	
	printf("Rental per day: Rs.%.2lf\n",book_price_per_day);		
	printf("Rental amount: Rs.%.2lf\n",total+fine);	
	
 	return 0;
 }
