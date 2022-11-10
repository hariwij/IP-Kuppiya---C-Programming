
#include<stdio.h>	// import standard input output library
// start of the main function
int main(void){
	
	int type_of_room, number_of_days;
	char accommodation_type, card_type;
	double amount, final_amount, discount;
		
	while(type_of_room!=-1){
		// input
		printf("Enter type of room : ");
		scanf("%d", &type_of_room);
		
		if(type_of_room==-1) continue;
		else if(!(type_of_room==1||type_of_room==2||type_of_room==3)){
			printf("Invalid Type of room\n\n");
			continue;
		}
		
		printf("Enter Accommodation Basis (F/H) : ");
		scanf(" %c", &accommodation_type);
		
		printf("Enter No of days : ");
		scanf("%d", &number_of_days);
		
		printf("Enter Reward Card Type ( G, S, B ) : ");
		scanf(" %c", &card_type);
				
		// process
		
		if(type_of_room==1){		
			if(accommodation_type=='F') amount=25555.00;
			else if(accommodation_type=='H') amount=17250.00;
		}
		else if(type_of_room==2){
			if(accommodation_type=='F') amount=17500.00;
			else if(accommodation_type=='H') amount=12250.00;
		}
		else if(type_of_room==3){
			if(accommodation_type=='F') amount=9000.00;
			else if(accommodation_type=='H') amount=7250.00;
		}	
		
			
		if(card_type=='G')
			discount=12.5;
		else if(card_type=='S')
			discount=11.5;	
		else if(card_type=='B')
			discount=9.5;
				
		final_amount=(amount-amount/100*discount)*number_of_days;
		
		printf("Amount(Rs.) : %.2lf\n\n",final_amount);
		
	}
	
	
	return 0;// 
}
