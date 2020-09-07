
NAME		= libasm.a

SRC 		= ft_strlen


FILES 		= $(addsuffix .s, $(SRC))
OBJ			= $(FILES:.s=.o)

NA			= nasm
CC			= clang

S_FLAGS		= -f mach64
C_FLAGS		= -Wall -Wextra -Werror -g

all: $(NAME)

$(NAME): $(OBJ)
	ar rc $(NAME)
	ranlib $(NAME)

%.o: %.s
	$(NA) $(S_FLAGS)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

test: $(NAME)
	$(CC) $(C_FLAGS) -c main.c
	$(CC) $(C_FLAGS) main.o $(NAME)
	./a.out

.PHONY:            all clean fclean re test
