LDFLAGS = -lstdc++

hello_world.o: hello_world.cpp
	$(CC) -c hello_world.cpp

main.o: main.cpp
	$(CC) -c main.cpp

hello: hello_world.o
	$(CC) -Wall hello_world.o $(LDFLAGS) -o hello

main: main.o
	$(CC) -Wall main.o $(LDFLAGS) -o main

clean:
	rm *.o main hello 
