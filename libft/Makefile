SRC = srcs
INCL = includes
CC = cc
# CFLAGS = -Wall -Wextra -I $(INCL)
# CFLAGS = -Wall -Wextra -Werror -I $(INCL)
CFLAGS = -Wall -Wextra -Werror
FUNCS = isalpha \
		isdigit \
		isalnum \
		isascii \
		isprint \
		strlen \
		memset bzero memcpy memmove memchr memcmp \
		strlcpy strlcat tolower toupper \
		strchr strrchr strncmp strnstr \
		atoi calloc strdup substr strjoin strtrim \
		split itoa \
		strmapi striteri \
		putchar_fd putstr_fd putendl_fd \
		putnbr_fd \
		putnbr_base_fd
# VPATH = srcs
# NAMEOBJS = ft_putchar.o ft_swap.o ft_putstr.o ft_strlen.o ft_strcmp.o
NAMEOBJS = $(addprefix ft_,$(FUNCS))
# vpath %.c $(SRC)
# vpath %.h $(INCL)
# vpath %goal test
# OBJS = $(addprefix $(SRC)/,$(NAMEOBJS))
OBJS = $(addsuffix .o,$(NAMEOBJS))

.PHONY:	all
all :	libft.a

libft.a :	$(OBJS)
	ar rcs libft.a $(OBJS)

# %.o: %.c $(INCL)/ft.h
#	$(CC) -c $(CFLAGS) -o $@ $<

# ($OBJS) : $(INCL)/ft.h
# $(CC) -c $(CFLAGS) $< -o $@

clean :
	rm -f *.o

fclean : clean
	rm -f libft.a

re : fclean all

