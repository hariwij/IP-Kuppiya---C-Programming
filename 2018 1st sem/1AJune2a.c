#include <stdio.h>

struct transaction
{
	int account_number;
	char name[10];
	char transaction_type;
	double amount;
};

int main(void)
{
	struct transaction transactions[5] =
		{
			{8254, "Viraj", 'D', 500.0},
			{1267, "Sudesh", 'D', 1000.0},
			{7823, "Ama", 'W', 350.0},
			{9023, "Danuli", 'W', 250.0},
			{4587, "Hiran", 'D', 750.0}
		};
	double withdraw_amount = 0, disposit_amount = 0, withdraw_min = -1, disposit_max = -1;
	int withdraw_min_index, disposit_max_index, i;

	for (i = 0; i < 5; i++)
	{
		if (transactions[i].transaction_type == 'W')
		{
			withdraw_amount += transactions[i].amount;
			if (withdraw_min > transactions[i].amount || withdraw_min == -1)
			{
				withdraw_min = transactions[i].amount;
				withdraw_min_index = i;
			}
		}
		else if (transactions[i].transaction_type == 'D')
		{
			disposit_amount += transactions[i].amount;
			if (disposit_max < transactions[i].amount || disposit_max == -1)
			{
				disposit_max = transactions[i].amount;
				disposit_max_index = i;
			}
		}
	}

	printf("Total deposit amount : %.2lf\n", disposit_amount);
	printf("Total withdrawal amount : %.2lf\n", withdraw_amount);
	printf("Max deposit by : %s\n", transactions[disposit_max_index].name);
	printf("Min withdrawal by : %s\n", transactions[withdraw_min_index].name);
	return 0;
}

