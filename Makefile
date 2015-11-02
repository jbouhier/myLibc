NAME    :=  libmy.a
SRC     :=  $(wildcard src/*.c)
ODIR    :=  obj
OBJ     :=  $(SRC:src/%.c=$(ODIR)/%.o)
CFLAGS  :=  -W -Wall -ansi -pedantic -Werror
ARFLAGS :=  -rc

.PHONY: all clean fclean re libmy

all: libmy

libmy: $(NAME)

$(NAME): $(OBJ)
	$(AR) $(ARFLAGS) $@ $^ 

$(ODIR)/%.o: src/%.c | $(ODIR)
	$(CC) $(LDFLAGS) $(CFLAGS) -o $@ -c $<

$(ODIR):
	@mkdir $@ 

clean:
	$(RM) -r $(ODIR)

fclean: clean
	$(RM) -r $(NAME)

re: fclean all
