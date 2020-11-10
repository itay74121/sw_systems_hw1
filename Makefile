gcc=gcc -Wall
all: mymaths mymathd 

mymaths: mains

mymathd: maind

mains: main.o libmyMath.a 
	${gcc} main.o -L . -lmyMath -o mains

maind: main.o libmyMath.so
	${gcc} main.o -L. -lmyMath -o maind

libmyMath.a: power1.o basicMath1.o myMath.h
	 ar -rcs libmyMath.a power1.o basicMath1.o

libmyMath.so:  power2.o basicMath2.o myMath.h
	${gcc} -shared power2.o basicMath2.o -o libmyMath.so

main.o: main.c 
	${gcc} -c -fPIC main.c -o main.o -I. 


power2.o: power.c myMath.h
	${gcc} -c -fPIC power.c -o power2.o
basicMath2.o: basicMath.c myMath.h
	${gcc} -c -fPIC basicMath.c -o basicMath2.o

power1.o: power.c myMath.h
	${gcc} -c  power.c -o power1.o
basicMath1.o: basicMath.c myMath.h
	${gcc} -c  basicMath.c -o basicMath1.o

clean:
	rm *.o *.so *.a  mains maind 
.PHONY: all mymaths mymathd 
