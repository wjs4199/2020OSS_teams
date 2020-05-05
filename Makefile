CC = gcc
CFLAGS = -W -Wall
TARGET = book
OBJECTS = book.o manager.o main.o

$(TARGET) : $(OBJECTS)
	$(CC) $(CFLAGS) -o $@ $^
clean :
	rm *.o book
