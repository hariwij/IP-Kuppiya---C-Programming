#include<stdio.h>

struct Book{
	int Book_No,Quantity;
	char Book_Name[50];
	float Book_Price;
	
}Book1,Book2,Book3;

int main(void){
	//book1 details
	printf("Enter the number of Book1 : ");
	scanf("%d" , &Book1.Book_No );
	
	printf("Enter the name of Book1 : ");
	scanf(" %[^\t\n]s" ,&Book1.Book_Name );
	
	printf("Enter the price of Book1 : ");
	scanf("%f" ,&Book1.Book_Price );
	
	printf("Enter the quantity of Book1 : ");
	scanf("%d" ,&Book1.Quantity );
	
	//book2 details
	printf("Enter the number of Book2 : ");
	scanf("%d" , &Book2.Book_No );
	
	printf("Enter the name of Book2 : ");
	scanf(" %[^\t\n]s" ,&Book2.Book_Name );
	
	printf("Enter the price of Book2 : ");
	scanf("%f" ,&Book2.Book_Price );
	
	printf("Enter the quantity of Book2 : ");
	scanf("%d" ,&Book2.Quantity );
	
	//book3 details
	printf("Enter the number of Book3 : ");
	scanf("%d" , &Book3.Book_No );
	
	printf("Enter the name of Book3 : ");
	scanf(" %[^\t\n]s" ,&Book3.Book_Name );
	
	printf("Enter the price of Book3 : ");
	scanf("%f" ,&Book3.Book_Price );
	
	printf("Enter the quantity of Book3 : ");
	scanf("%d" ,&Book3.Quantity );
	
	float Total_price1 = Book1.Quantity*Book1.Book_Price ;
	float Total_price2 = Book2.Quantity*Book2.Book_Price;
	float Total_price3 = Book3.Quantity*Book3.Book_Price ;
	
	printf("Book number %d\t%d\t%d\n",Book1.Book_No,Book2.Book_No,Book3.Book_No);
	printf("Book name %s\t%s\t%s\n",Book1.Book_Name,Book2.Book_Name,Book3.Book_Name);
	printf("Total price %f\t%f\t%f", Total_price1, Total_price2, Total_price3);
	
	
	
	
	return 0;
}
