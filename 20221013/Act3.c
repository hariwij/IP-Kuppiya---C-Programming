#include <stdio.h>

int main(void)
{

	// declare variables
	int months;
	double basic_salary, bonus;

	// get user inputs

	printf("number of months: ");
	scanf("%d", &months);

	printf("basic salary : ");
	scanf("%lf", &basic_salary);

	// calculation

	if (months >= 6)
	{
		bonus = months * basic_salary;
	}
	if (months == 12 && basic_salary <= 45000)
	{
		bonus = bonus + basic_salary;
	}
	// display results

	printf("Bonus : %.2lf", bonus);

	return 0;
}
