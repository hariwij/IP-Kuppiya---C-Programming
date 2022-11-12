#include<stdio.h>

int main(void){
	
	int pizza_type, qty;
	double total, pizza_price, discount;
	
	while(1){
		printf("Enter Pizza Type    : ");
		scanf("%d", &pizza_type);
		
		if(pizza_type==-1)break;
		
		printf("Enter Quantity      : ");
		scanf("%d", &qty);
		
		if(pizza_type==1){
			pizza_price=1000.0;
			discount=10;
		}
		else if(pizza_type==2){
			pizza_price=1600.0;		
			discount=12;	
		}
		else if(pizza_type==3){
			pizza_price=1400.0;	
			discount=15;		
		}
		total=pizza_price*qty;
		
		if(qty>3){
			total=total-(total/100*discount);
		}

		printf("Total Price     Rs. : %.2lf\n\n",total);		
	}
	
	return 0;
}
