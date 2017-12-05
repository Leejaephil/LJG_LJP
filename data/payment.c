#include <stdio.h>


void ch_payment()
{
	int met;
	int pay;

	printf("Please select payment method\n");
	printf("1.On-site payment\n 2.Mobile payment\n");
	scanf("%d",&met);

	if (met == 1)
	{
		printf("Payment schedule has been completed.\n");
	}
	else 
	{
		printf("Please select payment method.\n");
		printf("1.Account transfer\n 2.Credit card\n");
		scanf("%d",&pay);

			if (pay == 1)
			{
				printf("Please send us to 1111-2222-3333\n");
			}
			else 
			{
				printf("Please select a card\n");
				printf("Shinhan card, kb card, nonghyup card, woori card\n");

			}
	}
}

