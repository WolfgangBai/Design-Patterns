CC=/opt/rh/devtoolset-7/root/usr/bin/g++
CFLAGS=-std=c++11

main:main.o 
main.o: main.cc
	$(CC) $(CFLAGS) -c main.cc -o main.o
.PHONY:clean
clean:
	rm -rf *.o
