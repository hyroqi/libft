SRCS 	= srcs/ft_isalnum.c
OBJS 	= *.o
LIB		= libft.a
CC		= gcc

${LIB}: ${OBJS}
	ar rcs ${LIB} ${OBJS}

all: ${LIB}

.c.o:
	${CC} ${CFLAGS} -I includes -c $<

clean:
	rm -f ${OBJS}

fclean: clean
	rm -f ${LIB}

re: fclean all

.PHONY: all clean fclean re