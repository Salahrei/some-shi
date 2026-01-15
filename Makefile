NAME = pushswap.a

CC = cc

CFLAGS = -Wall -Wextra -Werror

SRCS = ft_lstsize.c Push_A.c Push_B.c reverse.c Rreverse.c rotate.c Rrotate.c Sswap.c Swap.c \
		sort_3.c sort_4.c sort_5.c indexing.c push_front.c push_swap.c parse.c numbers.c\
		 free_func.c ft_split.c im_chunking.c

OBJ = $(SRCS:.c=.o)

all: $(NAME)

$(NAME): $(OBJ)
	ar rcs $(NAME) $(OBJ)

%.o: %.c pushswap.h
	$(CC) -c $< -o $@

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: clean