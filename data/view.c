#include <stdio.h>

void view_res()
{
    char ch;
    FILE *fp;
    
    fp = fopen("reserved.txt","r");

    if(fp == NULL)
    {
        printf("NO RESERVATION DATA! \n");
        exit(1);
    }
    else
    {
        system("clear");
        printf("Your Reservation List : \n");
        while((ch = fget(fp)) != EOF)
        printf("%c",ch);
    }

    fclose(fp);

}
