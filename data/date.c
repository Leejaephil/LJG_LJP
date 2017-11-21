#include <stdio.h>

void ch_date(int *year,int month, int day)
{
	printf("Please select a date for departure\n");
	printf("First! please select the starting year.\n");

	while(1)
	{
		scanf("%d", year);

		if(*year -gt 2018 || *year -lt 2017)
		{
			printf("Please choose in 2017 or 2018\n");
		}
		else
		{
		break;
		}
	}

	printf("You selected %d, please select monthly\n",year);
	
	while(1)
	{
		scanf("%d", month);

		if(*month -gt 12 || *month -lt 1)
		{
			printf("Please choose in 1~12\n");
		}
		else
		{
		break;
		}
	}

	printf("You selected %d, please select day\n",month);

	while(1)
	{
		scanf("%d", day);

		if((*month == (1 || 3 || 5 || 7 || 8 || 10 || 12)) && (*day -gt 31 || *day -lt 1))
		{
			printf("Please choose in 1~31\n");
		}
		else if((*month == (4 || 6 || 9 || 11)) && (*day -gt 30 || *day -lt 1))
		{
			printf("Please choose in 1~30\n");
		}
		else if((*month == 2) && (*day -gt 28 || *day -lt 1))
		{
			printf("Please choose in 1~28\n");
		}
		else
		{
		break;
		}
	}
		char ans;
		printf("Is the date of your choosing on %d/%d/%d? Y/N \n",*year,*month,*day);
		scanf("%s",ans);

		if(ans == Y)
		{
			printf("Completed\n");
		}
		else(ans == N)
		{
			printf("Please try again\n");
		}

}
