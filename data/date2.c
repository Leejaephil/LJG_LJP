#include <stdio.h>
#include <string.h>
#include <time.h>

void ch_date(int *year,int *month, int *day)
{
	printf("Please select a date for departure\n");
	printf("First! please select the starting year.\n");

	int y = 0;
    	int m = 0;
	time_t timer;
	struct tm *t;

	while(1)
	{
		scanf("%d", year);

		if(*year > 2018 || *year < 2017)
		{
			printf("Please choose in 2017 or 2018\n");
			continue;
		}
		else if(*year < (t->tm_year+1900))
		{
			printf("Already passed!\n");
			printf("Please choose a year again: ");
			continue;
		}
		else if(*year > (tm_year+1900))
		{
			y = 1;
			break;
		}
		else
			break;
	}

	printf("You selected %d, please select monthly\n", *year);
	
	while(1)
	{
		scanf("%d", month);

		if(*month > 12 || *month < 1)
		{
			printf("Please choose in 1~12\n");
			continue;
		}
		else if(y == 0)
		{
			if(*month < (t->tm_mon+1))
			{
				printf("Already passed!\n");
				prinrf("Please choose a month again: \n");
		                continue;
			}
			else if(*month > (t->tm_mon+1))
			{
				m = 1;
				break;
			}
			else
				break;
		}
		else
		{
			m = 1;
			break;
		}

	}

	printf("You selected %d, please select day\n", *month);

	while(1)
	{
		scanf("%d", day);

		if(*day == 0)
		{
			printf("Please type a correct day: ");
			continue;
		}
		else if(m_flag == 0)
		{
			if(*day < t->tm_mday)
			{
				printf("Already passed!\n");
				printf("Please choose a day again: ");
				continue;
			}
		}

		if (((*month <= 7 && *month % 2 == 0 || (*month > 7 && *month % 2 == 1)) && *day > 30)
		{
			if(*month == 2)
			{
				if(*year % 4 == 0)
				{
					printf("Please choose in 1-29: ");
					continue;
				}
				else
				{
					printf("Please choose in 1-28: ");
					continue;
				}
			}
				printf("Please choose in 1-30: ");
				continue;
		}
		else if (((*month <= 7 && *month % 2 == 1) || (*month > 7 && *month %2 = 0)) && *day
		{
			printf("Please choose in 1-31: ");
			continue;
		}
		else
			break;
	}
	
	printf("\n You've chosen %d.%d.%d!\n",*year, *month, *day);






