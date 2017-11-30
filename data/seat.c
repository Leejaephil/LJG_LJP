#include <stdio.h>

int seatnum = 0;


void ch_seat(){
    int i,j;

    int seat[5][10] = {
        {0,0,0,0,0,0,0,0,0,0},
        {0,3,6,9,12,15,18,21,24,28},
        {0,0,0,0,0,0,0,0,0,27},
        {0,2,5,8,11,14,17,20,23,26},
        {0,1,4,7,10,13,16,19,22,25}
    };

    int reserve[30] = {
        0,0,0,0,0,0,0,0,0,0,
        0,0,0,0,0,0,0,0,0,0,
        0,0,0,0,0,0,0,0,0,0
    };

    printf("===========BUS SEAT===========\n");

    for(i = 1; i < 5 ; i++){
        for(j =1; j<10 ; j++){
             if(seat[i][j]==0){
                printf("   ");
                }
            else if(seat[i][j]==27){printf("      %d ",seat[i][j]);}
            else{printf(" %d ",seat[i][j]);}
        }
        printf("\n");
    }
    //seat select
    while(1){
        printf("Please choose your seat\n");

        //choose seat number
        while(1){
            printf("Please Insert Seat Number : ");
            scanf("%d",&seatnum);
            
            if(seatnum<1 || seatnum >28){
                printf("Invalid Seat Number. Please Retry\n");
                continue;
            }
            if(reserve[seatnum]==1){
                 printf("This seat aleady Reserved\n");
                continue;
            }
            else{ reserve[seatnum] = 1;}
            break;
        }//end of choose seat number
        
        printf("You choose seat number : %d\n",seatnum);

        for(i = 1; i < 5; i++){
            for(j = 1; j < 10; j++){
                if(seat[i][j]==0){printf("   ");}
                else{
                    if(seat[i][j] == seatnum){
                        if(seat[i][j] == 27){
                            printf("     [%d]",seat[i][j]);
                        }
                        else{printf("[%d]",seat[i][j]);}
                    }
                    else if(seat[i][j]==27){printf("      %d ",seat[i][j]);}
                    else{printf(" %d ",seat[i][j]);}
                }
            }
            printf("\n");
        }
    break;
    }//end of seat select

    

}
