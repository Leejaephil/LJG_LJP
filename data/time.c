#include <stdio.h>

void ch_time(char *time, char *ch)
{
	printf("Please select the starting time\n");

	for(int i=0; i<11; i++){
		printf("%d. %s\n", i+1, time[i]);
	}

	while(1){
		printf("write number of time\n");
		scanf("%c", ch);

		if(*ch -gt 11 || *ch -lt 1)
		{
			printf("Please wirte in 1~11\n");
                }
		else
		{
			printf("You've chosen %s!\n", time[(*ch)-1]);
			break;
		}
}