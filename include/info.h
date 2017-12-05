#ifndef __INFO_H_
#define __INFO_H_

//departure
void ch_terminal();
int ch_d;

void ch_time();
void ch_date();
void ch_payment();

//arival
void ch_arival();
int ch_a;
//seat.h
void ch_seat();
int seatnum;

//view
void view_res();

//date
int year;
int month;
int day;

//time
int ch_t;

char *terminal[5] = { "Incheon","DongSeoul","Gimpo_Airport","Bucheon","Yongin"};

char *time_table[11] = {"7:00","8:00","9:00","10:00","11:00","12:00","14:00","16:00","18:00","20:00","22:00" };


#endif
