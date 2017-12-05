#include<stdio.h>

void ch_arival(char **terminal,int *ch_a)
{

	printf("ESE bus reservation sysyem\n");
        printf("First category\n");
	printf("Please choose a arival terminal!\n");

	for (int i=0; i<=4; i++)
		printf("%d. %s\n", i+1, terminal[i]);


	while(1)
	{
		printf("write number  of terminal\n");
		scanf("%d", ch_a);

		if((*ch_a > 5) || (*ch_a < 0))
		{
			printf("Please write in 1 ~ 5\n");
			printf("Let me explain once more\n");
				for (int i=0; i<=4; i++)
					printf("%d. %s\n", i+1, terminal[i]);
		}
		else
		{
			printf("You've chosen %s!\n,",terminal[(*ch_a)-1]);
      			break;
		}
	}
}
