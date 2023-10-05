CC = g++
CFLAGS =

main.exe: main.o vehicle.o car.o
    $(CC) $(CFLAGS) -o main.exe main.o vehicle.o car.o

main.o: main.cpp vehicle.h car.h
    $(CC) $(CFLAGS) -c main.cpp

vehicle.o: vehicle.cpp vehicle.h
    $(CC) $(CFLAGS) -c vehicle.cpp

car.o: car.cpp car.h vehicle.h
    $(CC) $(CFLAGS) -c car.cpp

clean:
    rm -f main.exe *.o
