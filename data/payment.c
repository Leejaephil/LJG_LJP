#include <stdio.h>


void ch_payment()
{
	int met;
	int pay;

	printf("Please select payment method\n");
	printf("1.On-site payment\n 2.Mobile payment\n");
	scanf("%d",sel);

	if (met == 1)
	{
		printf("Payment schedule has been completed.\n");
	}
	else (met == 2)
	{
		printf("Please select payment method.\n");
		printf("1.Account transfer\n 2.Credit card\n");
		scanf("%d",pay);

			if (pay == 1)
			{
				printf("");
			}
			else (pay == 2)
			{
				printf("");
			}
	}
}

int main(void)
{
	ch_payment();
	return 0;
}
