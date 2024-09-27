CC = gcc
CFLAGS = -Wall -g -I./include
OBJ = main.o hello.o strfun.o fops.o
NAME = learncinoneday
OUTPUT = build

all: learncinoneday

%.o: %.c %.h

# Compile obj 
$(NAME): $(OBJ)
	$(CC) $(CFLAGS) -o $@ $^

# Compiling .c files into .o files
%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@
# Run 
run: 
	./$(NAME)

# Clean up
clean:
	rm -f *.o $(NAME) 
