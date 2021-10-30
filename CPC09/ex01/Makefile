TARGET = libft.a
CC = gcc
CFLAGS = -Wall -Wextra -Werror
SRCS = srcs/ft_putchar.c srcs/ft_swap.c srcs/ft_putstr.c srcs/ft_strlen.c srcs/ft_strcmp.c
OBJS = ${SRCS:.c=.o}
INCS = includes/

.c.o:
	${CC} ${CFLAGS} -I ${INCS} -c $< -o ${<:.c=.o}

${TARGET}:	${OBJS}
	ar rc ${TARGET} ${OBJS}

all:	${TARGET}

fclean:
	rm -f ${TARGET} ${OBJS}

clean:
	rm -f ${OBJS}

re:	fclean all
