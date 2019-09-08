CC=/opt/rh/devtoolset-7/root/usr/bin/g++
CFLAGS=-std=c++11

Command:Command.o 
Command.o: Command.cc
	$(CC) $(CFLAGS) -c Command.cc -o Command.o
.PHONY:clean
clean:
	rm -rf *.o
