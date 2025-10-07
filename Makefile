# **************************************************************************** #
#                                  MAKEFILE                                    #
# **************************************************************************** #

NAME        := pipex
CC          := cc
CFLAGS      := -Wall -Wextra -Werror
AR          := ar rcs
RM          := rm -f

# ----------------------------------------------------------------------------- #
#   Sources                                                                     #
# ----------------------------------------------------------------------------- #

SRCS        := pipex.c execute_command.c utils.c
OBJS        := $(SRCS:.c=.o)

BONUS_SRCS  := pipex_bonus.c utils.c
BONUS_OBJS  := $(BONUS_SRCS:.c=.o)

# ----------------------------------------------------------------------------- #
#   Includes                                                                    #
# ----------------------------------------------------------------------------- #

INCLUDES    := -I.
LIBFT_DIR   := libft
LIBFT_A     := $(LIBFT_DIR)/libft.a
LIBFT_INC   := -I$(LIBFT_DIR)

# ----------------------------------------------------------------------------- #
#   Rules                                                                       #
# ----------------------------------------------------------------------------- #

.PHONY: all clean fclean re fake test bonus

all: $(NAME)

$(NAME): $(LIBFT_A) $(OBJS)
	$(CC) $(CFLAGS) $(INCLUDES) $(LIBFT_INC) $(OBJS) $(LIBFT_A) -o $(NAME)

bonus: $(LIBFT_A) $(BONUS_OBJS)
	$(CC) $(CFLAGS) $(INCLUDES) $(LIBFT_INC) $(BONUS_OBJS) $(LIBFT_A) -o $(NAME)

$(LIBFT_A):
	@$(MAKE) -C $(LIBFT_DIR)

clean:
	@$(MAKE) clean -C $(LIBFT_DIR)
	$(RM) $(OBJS) $(BONUS_OBJS)

fclean: clean
	@$(MAKE) fclean -C $(LIBFT_DIR)
	$(RM) $(NAME)

re: fclean all

fake : 
	echo '#!/bin/bash\n\n< "$$1" $$2 | $$3 > "$$4"\n' > $(TGT)
	chmod +x $(TGT)

#$(TGT): $(OBJS) $(TGT).o
#	$(CC) $(CFLAGS) -c $@.c -o $@ $< -Llibft -lft
	$(CC) $(CFLAGS) -o $@ $(TGT).o $(OBJS) -Llibft -lft
	
#%.o: %.c %.h $(TGT).h
#	cd libft; make
#	$(CC) $(CFLAGS) -c $@.c -o $@ $< -Llibft -lft
	$(CC) $(CFLAGS) -c $< 

# libft.a :	$(OBJS)
#	ar rcs libft.a $(OBJS)

# %.o: %.c $(INCL)/ft.h
#	$(CC) -c $(CFLAGS) -o $@ $<

# ($OBJS) : $(INCL)/ft.h
#	$(CC) -c $(CFLAGS) $< -o $@

test: 
	@if [ ! -x $(NAME) ] ; then exit 1; fi 
	@echo "rubbish" > testfile_out
	@echo "There is lead here" > testfile_in
	./$(NAME) testfile_in cat "sed -e s/lead/gold/" testfile_out
	@cat testfile_out |grep -q gold &>/dev/null && echo OK || echo NOK

