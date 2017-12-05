#include <stdio.h>

void ch_time(char **time_table, int *ch_t)
{
	printf("Please select the starting time\n");

	for(int i=0; i<11; i++){
		printf("%d. %s\n", i+1, time_table[i]);
	}

	while(1){
		printf("write number of time\n");
		scanf("%d", ch_t);

		if(*ch_t > 11 || *ch_t < 1)
		{
			printf("Please wirte in 1~11\n");
                }
		else
		{
			printf("You've chosen %s!\n", time_table[(*ch_t)-1]);
			break;
		}
	}
}
