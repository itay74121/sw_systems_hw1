all: mymaths mymathd 

mymaths: mains

mymathd: maind

mains: main.o libmyMath.a 
	gcc main.o -L . -lmyMath -o mains

maind: main.o libmyMath.so
	gcc main.o -L. -lmyMath -o maind

libmyMath.a: power.o basicMath.o myMath.h
	 ar -rcs libmyMath.a power.o basicMath.o

libmyMath.so:  power.o basicMath.o myMath.h
	gcc -shared power.o basicMath.o -o libmyMath.so

main.o: main.c 
	gcc -c -fPIC main.c -o main.o -I. 

power.o: power.c myMath.h
	gcc -c -fPIC power.c
basicMath.o: basicMath.c myMath.h
	gcc -c -fPIC basicMath.c
clean:
	rm *.o *.so *.a  mains maind 
.PHONY: all mymaths mymathd 
