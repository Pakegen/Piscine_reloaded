CC = cc
CFLAGS = -Wall -Werror -Wextra

IDIR = includes
SRCDIR = srcs
OBJDIR = srcs
ROOT = ./

SRC = $(SRCDIR)/ft_putchar.c \
      $(SRCDIR)/ft_putstr.c \
      $(SRCDIR)/ft_strcmp.c \
      $(SRCDIR)/ft_strlen.c \
      $(SRCDIR)/ft_swap.c

OBJ = $(patsubst %.c, %.o, $(SRC))
NAME = libft.a

all : $(NAME)

$(OBJDIR)/%.o : $(SRCDIR)/%.c
	$(CC) $(CFLAGS) -I$(IDIR) -c $^ -o $@

$(NAME) : $(OBJ)
	ar -rcs libft.a $<

clean :
	rm -f $(OBJ)

fclean : clean
	rm -f libft.a

re : fclean libft.a

.PHONY : all clean re fclean
