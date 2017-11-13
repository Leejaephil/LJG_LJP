#include<stdio.h>

void ch_terminal(char *terminal)
{
	printf("Please choose a departure terminal!\n");

	for (int i=0; i<5; i++)
		printf("%d. %s\n", i+1, theater[i]);

	printf("write number of terminal\n");
