CC=g++
CFLAGS=-c -g -O2
OBJS=  Main.o

main:$(OBJS)
	$(CC) $^ -o $@

%.o:%.cpp
	$(CC) $(CFLAGS) $< -o $@


.PHONY:

clean:
	$(RM) *.o main
