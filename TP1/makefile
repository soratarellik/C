all:
	  make mytee
	  make Ex2
	  make Ex3

mytee: mytee.o
	  gcc -o mytee mytee.o

Ex2: Ex2.o
	  gcc -o Ex2 Ex2.o

Ex3: Ex3.o
	  gcc -o Ex3 Ex3.o

mytee.o: mytee.c
	  gcc -c mytee.c -Wall -ansi

Ex2.o: Ex2.c
	  gcc -c Ex2 -Wall -ansi

Ex3.o: Ex3.c
	  gcc -c Ex3 -Wall -ansi