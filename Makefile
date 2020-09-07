NAME		= libasm.a

NA			= nasm
CC			= clang

S_FLAGS		= -f macho64
C_FLAGS		= -Wall -Wextra -Werror

SRC 		= ft_strlen

FILES 		= $(addsuffix .s, $(SRC))
OBJ			= $(FILES:.s=.o)

%.o: %.s
	$(NA) $(S_FLAGS) $(FILES)

all: $(NAME)

$(NAME): $(OBJ)
	ar rc $(NAME) $(OBJ)
	ranlib $(NAME)


clean:
	rm -f $(OBJ)
	rm -f main.o

fclean: clean
	rm -f $(NAME)
	rm -f test

re: fclean all

test: $(NAME)
	$(CC) $(C_FLAGS) -c main.c
	$(CC) $(C_FLAGS) main.o $(NAME) -o test
	./test

.PHONY:            all clean fclean re test
