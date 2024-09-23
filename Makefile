CC = gcc
FLAGS = -Wall -Wextra
SDL2FLAG = `sdl2-config --cflags --libs`
SRC = main.c my_function.c
OBJ = $(addprefix $(OBJDIR)/, $(notdir $(SRC:.c=.o)))
EXEC = bin/prog
SRCDIR = src
OBJDIR = bin/obj
INCDIR = ./include

all: $(EXEC)


$(OBJDIR)/%.o: $(SRCDIR)/%.c
	mkdir -p $(OBJDIR)
	$(CC) -o $@ -c $< $(FLAGS) -I$(INCDIR)

$(EXEC): $(OBJ)
	$(CC) -o $(EXEC) $^ $(FLAGS) $(SDL2FLAG)

clean:
	rm -rf $(OBJDIR)
fclean: clean
	rm -rf $(EXEC)  
re : fclean all

.PHONY: all clean flclean re
