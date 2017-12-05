OPT = -g -Wall
.PHONY: clean

libfunc.a : date.o arival.o departure.o payment.o seat.o time.o view.o
	ar -rv libfuncs.a date.o arival.o departure.o payment.o seat.o time.o view.o

date.o : date.c
	gcc %(OPT) -c date.c -o date.o

arival.o : arival.c
	gcc %(OPT) -c arival.c -o arival.o

departure.o : departure.c
	gcc %(OPT) -c departure
