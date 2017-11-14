#include<stdio.h>

void ch_terminal(char *terminal,char *ch)
{
	int cnt=0;
	printf("Please choose a departure terminal!\n");

	for (int i=0; i<5; i++)
		cnt++
		printf("%d. %s\n", i+1, theater[i]);


	while(1)
	{
		printf("write number  of terminal\n");
		scanf("%c", ch);

		if(*ch -gt 5 || *ch -lt 0)
		{
			printf("Please write in 1 ~ 5\n");
		}
		else
		{
			prirntf("You've chosen %s!\n,",terminal[(*ch)-1]);
			break;
		}
	}
}
