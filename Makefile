SRCS 	= ft_strlen.c
OBJS 	= ${SRCS:.c=.o}
LIB		= libft.a
CC		= gcc
CFLAGS	= -Wall -Wextra -Werror

all: ${LIB}

${LIB}: ${OBJS}
	ar rcs ${LIB} ${OBJS}

.c.o:
	${CC} ${CFLAGS} -I. libft.h -c $<

clean:
	rm -f ${OBJS}

fclean: clean
	rm -f ${LIB}

re: fclean all

.PHONY: all clean fclean re