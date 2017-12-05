#include "../include/info.h"


int main()
{
    ch_terminal(terminal,&ch_d);
    ch_arival(terminal, &ch_a);
    ch_date(&year, &month, &day);
    ch_time(time_table,&ch_t);
    ch_seat(seatnum);//select seat
    ch_payment();
    view_res();//view Reservation data



    return 0;
}
