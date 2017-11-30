#include <stdio.h>


void ch_payment(char *credit,char *ch)
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
				printf("Please send us to 1111-2222-3333\n");
			}
			else (pay == 2)
			{
				printf("Please select a card\n");
				for (int i=0; i<5 i++)
					pritnf("%d. %s\n, i+1, credit[i]);
					scanf("%c",ch);

					printf("You've chosen %s!\n",credit[(*ch)-1]);

			}
	}
}

int main(void)
{
	ch_payment();
	return 0;
}
