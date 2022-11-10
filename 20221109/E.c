#include<stdio.h>


int main(void){
	
	int child_count;
	char insurance_type, package_type, _continue;
	double package_amount, final_amount;
	
	while(1){
		
		printf("Insurance Type :  ");
		scanf(" %c", &insurance_type);
		
		if(!(insurance_type=='A'||insurance_type=='N'||insurance_type=='D'||insurance_type=='S')){
			printf("Invalid Insurance Type !");
			break;
		}
		
		printf("Family or Individual ( F - family and I - individual) : ");
		scanf(" %c", &package_type);
			
		if(insurance_type=='A'){
			if(package_type=='F')package_amount=5200.00;
			else if(package_type=='I')package_amount=4500.00;
		}
		
		else if(insurance_type=='N'){
			if(package_type=='F')package_amount=4300.00;
			else if(package_type=='I')package_amount=3100.00;
		}
		
		else if(insurance_type=='D'){
			if(package_type=='F')package_amount=4800.00;
			else if(package_type=='I')package_amount=3600.00;
		}
		
		else if(insurance_type=='S'){
			if(package_type=='F')package_amount=3800.00;
			else if(package_type=='I')package_amount=3300.00;
		}
		
		if(package_type=='F'){
			printf("Number of children : ");
			scanf("%d", &child_count);
			
			final_amount = package_amount + package_amount / 100 * ( child_count > 2 ? 10 * ( child_count - 2 ) : 0 );
		}
		else
			final_amount=package_amount;
		
		
		printf("Total Amount : %.2lf\n",final_amount);
		
		printf("Do you want to continue ");
		scanf(" %c", &_continue);
		
		if(_continue=='n'||_continue=='N')
			break;	
		printf("\n");	
	}	
	return 0;
}
