CC=/opt/rh/devtoolset-7/root/usr/bin/g++
CFLAGS=-std=c++11

main:main.o Pizza.o SimplePizzaFactory.o PizzaStore.o
main.o: main.cc
	$(CC) $(CFLAGS) -c main.cc -o main.o
Pizza.o: Pizza.cc
	$(CC) $(CFLAGS) -c Pizza.cc -o Pizza.o
SimplePizzaFactory.o: SimplePizzaFactory.cc
	$(CC) $(CFLAGS) -c SimplePizzaFactory.cc -o SimplePizzaFactory.o
PizzaStore.o: PizzaStore.cc
	$(CC) $(CFLAGS) -c PizzaStore.cc -o PizzaStore.o
.PHONY:clean
clean:
	rm -rf *.o
