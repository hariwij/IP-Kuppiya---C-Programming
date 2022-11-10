#include<stdio.h>
int main(void){
	
	int Room_Opton,No_of_Guests,Add_Tour,Total_Price,Charges_per_guest,Add_Charges_per_guest;
	int no_of_days=0;
	char Tour_type;
	
	while(1){
	
		printf("Input room option: ");
		scanf("%d",&Room_Opton);
		
		printf("Number of guests: ");
		scanf("%d",&No_of_Guests);
		
		printf("Number of Days: ");
		scanf(" %d",&no_of_days);
		
		if(Room_Opton == 1){
			if(No_of_Guests <= 2){
				
				Charges_per_guest = 45000;
				
			}
			if(No_of_Guests >= 2 && No_of_Guests <= 5){
				
				Charges_per_guest = 44000;
				
			}
			if(No_of_Guests > 5){
				
				Charges_per_guest = 43000;
				
			}	
		}
		if(Room_Opton == 2){
			if(No_of_Guests <= 2){
				
				Charges_per_guest = 40000;
				
			}
			if(No_of_Guests >= 2 && No_of_Guests <= 5){
				
				Charges_per_guest = 38000;
				
			}
			if(No_of_Guests > 5){
				
				Charges_per_guest = 35000;
				
			}
		}
		if(Room_Opton == 3){
			if(No_of_Guests <= 2){
				
				Charges_per_guest = 37500;
				
			}
			if(No_of_Guests >= 2 && No_of_Guests <= 5){
				
				Charges_per_guest = 35000;
				
			}
			if(No_of_Guests > 5){
				
				Charges_per_guest = 32000;
				
			}
	}
		else{
				printf("Error!");
			}	
			
		
		
		while(1){
			
			printf("Do you need any additional tours(y/n): ");
			scanf(" %c",&Add_Tour);
			
			if(Add_Tour == 'N' || Add_Tour == 'n'){
				
				break;
				
			}
			
			else if(Add_Tour == 'Y' || Add_Tour == 'y'){
				
				
				printf("Input your option: ");
				scanf("%d",&Tour_type);
				
			}
			
			if(Tour_type == 1){
				
				Add_Charges_per_guest = 3500;
				
			}
			if(Tour_type == 2){
				
				Add_Charges_per_guest = 1000;
				
			}
			if(Tour_type == 3){
				
				Add_Charges_per_guest = 1500;
				
			}
			if(Tour_type == 4){
				
				Add_Charges_per_guest = 2000;
				
			}
			Total_Price = (Charges_per_guest+Add_Charges_per_guest)*No_of_Guests;

		}
		printf("Total Price : %d\n",Total_Price);	
		
	}

	return 0;
}
