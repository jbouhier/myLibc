NAME	=	libmy.a
SRC 	=	$(wildcard *.c)
OBJ 	=	$(SRC:%.c=%.o)
CC		=	gcc
RM		=	rm -f
CFLAGS	=	-W -Wall -ansi -pedantic -Werror
LDFLAGS = -L. -lmy

$(NAME):	$(OBJ)
			$(CC) -c $(SRC)
			ar r $(NAME) $(OBJ) 
			ranlib $(NAME)

all:		$(NAME)
	
clean:
			$(RM) $(OBJ)
	
fclean:		clean
			$(RM) $(NAME)

re:			fclean all	
