OPT = -g -Wall
.PHONY: clean

libfunc.a : date.o arival.o departure.o payment.o seat.o time.o view.o
	ar -rv libfuncs.a date.o arival.o departure.o payment.o seat.o time.o view.o

date.o : date.c
	gcc $(OPT) -c date.c -o date.o

arival.o : arival.c
	gcc $(OPT) -c arival.c -o arival.o

departure.o : departure.c
	gcc $(OPT) -c departure.c -o departure.o

seat.o : seat.c
	gcc $(OPT) -c seat.c -o seat.o

time.o : time.c
	gcc $(OPT) -c time.c -o time.o

view.o : view.c
	gcc $(OPT) -c view.c -o view.o

payment.o : payment.c
	gcc $(OPT) -c payment.c -o payment.o

clean :
	rm *.o
