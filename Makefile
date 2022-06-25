SRC = $(wildcard sources/*.cpp) \
	  $(wildcard sources/classes/*.cpp)

OBJ = $(SRC:.cpp=.o)

CC = g++

CPPFLAGS = -Iinclude -lsfml-graphics -lsfml-window -lsfml-system

NAME = roguelite

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(CPPFLAGS) -o $(NAME) $(OBJ)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

run: $(NAME)
	make && make clean && ./$(NAME)
