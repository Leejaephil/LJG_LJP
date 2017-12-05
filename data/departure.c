#include<stdio.h>

void ch_terminal(char *terminal,char *ch_d)
{

	printf("EsE bus reservation sysyem\n");
        printf("1.First category\n");
	printf("Please choose a departure terminal!\n");

	for (int i=0; i<5; i++)
		printf("%d) %s\n", i+1, *terminal[i]);


	while(1)
	{
		printf("write number  of terminal\n");
		scanf("%d", ch_d);

		if(*ch > 5 || *ch < 0)
		{
			printf("Please write in 1 ~ 5\n");
			printf("Let me explain once more\n");
				for (i=0; i<5; i++)
					printf("%d. %s\n", i+1, terminal[i]);
			continue;
		}
		else
		{
			printf("You've chosen %s!\n,",terminal[(*ch_d)-1]);
                        printf("Please select the Arrival terminal next time.\n");
			break;
		}
	}
}
