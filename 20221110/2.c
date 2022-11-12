#include<stdio.h>

int main(void){
	
	int item_type, qty;
	double total, item_price;
	
	while(1){
		printf("Enter item      : ");
		scanf("%d", &item_type);
		
		if(item_type==-99){
			printf("Total price to pay Rs: %.2lf",total);
			break;
		}
		
		switch(item_type){
			case 1:
				item_price=30.0;
				break;
			case 2:
				item_price=45.0;
				break;
			case 3:
				item_price=55.50;
				break;
			default:
				printf("Invalied item id\n\n");
				continue;
		}
		
		printf("Enter Quantity  : ");
		scanf("%d", &qty);
		
		total += item_price*qty;
		printf("\n");
	}
	
	return 0;
}
