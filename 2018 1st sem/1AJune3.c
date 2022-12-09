#include <stdio.h>
#include <assert.h>

float calDiscount(int time, float totAmount);
void testCalDiscount();
void displayGift(float finalTot);

int main(void)
{	
	int time;
	float total_amount, discount;
	
	testCalDiscount();

	while (1)
	{
		printf("Enter time : ");
		scanf("%d", &time);
		if (time >= 0 && time <= 24)
			break;
		printf("Invaild time! Enter time again.\n");
	}

	printf("Enter total amount : ");
	scanf("%f", &total_amount);

	discount = calDiscount(time, total_amount);
	
	printf("Discount amount : %.2f\n", discount);
	printf("Final amount : %.2f\n", total_amount - discount);
	displayGift(total_amount - discount);
	return 0;
}

float calDiscount(int time, float totAmount)
{
	float discount_percent = 0;

	if (time >= 16 && time <= 19)
	{
		if (totAmount >= 5000)
			discount_percent = 10;
		else if (totAmount >= 2500)
			discount_percent = 7;
	}
	else if (time >= 20 && time <= 22)
	{
		if (totAmount >= 5000)
			discount_percent = 12;
		else if (totAmount >= 2500)
			discount_percent = 9;
	}
	return totAmount / 100 * discount_percent;
}

void testCalDiscount()
{
	assert(calDiscount(17, 6000) == 600); // true
	assert(calDiscount(21, 6000) == 720); // true
}

void displayGift(float finalTot)
{
	if (finalTot >= 7000)
		printf("Gift : Packet of Milk");
	else if (finalTot >= 5000)
		printf("Gift : 1kg of Sugar");
	else if (finalTot >= 3000)
		printf("Gift : Pack of 6 Eggs");
	else
		printf("No Gift!");
}
