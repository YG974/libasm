NAME		= libasm.a

CC			= clang
NA			= nasm

C_FLAGS		= -Wall -Wextra -Werror
S_FLAGS		= -f macho64

SRC 		= ft_strlen \
				ft_strcpy \
				ft_strcmp

FILES 		= $(addsuffix .s, $(SRC))
OBJ			= $(FILES:.s=.o)

%.o: %.s
	$(NA) $(S_FLAGS) $<

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
	./test | cat -e

.PHONY:            all clean fclean re test
