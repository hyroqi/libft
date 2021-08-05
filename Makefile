SRCS 	= srcs/ft_isalnum.c
OBJS 	= *.o
LIB		= libft.a
CC		= gcc

all: ${LIB}

${LIB}: ${OBJS}
	ar rcs ${LIB} ${OBJS}

.c.o:
	${CC} ${CFLAGS} -I includes -c $<

clean:
	rm -f ${OBJS}

fclean: clean
	rm -f ${LIB}

re: fclean all

.PHONY: all clean fclean re