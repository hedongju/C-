CC=g++
CFLAGS=-c -g -O2
OBJS= 4-4-Line.o 4-4-Line-main.o

main:$(OBJS)
	$(CC) $^ -o $@

%.o:%.cpp
	$(CC) $(CFLAGS) $< -o $@


.PHONY:

clean:
	$(RM) *.o main
