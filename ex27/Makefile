CC = cc
CFLAGS = -Wall -Werror -Wextra

SRCDIR = srcs

TARGET = ft_display_file
SRC = $(SRCDIR)/main.c

OBJ = $(patsubst %.c, %.o, $(SRC))

.PHONY: all clean re fclean

all : $(TARGET)

$(TARGET) : $(SRC)
	$(CC) $(CFLAGS) $^ -o $@ -g

clean :
	rm -rf $(OBJ)
fclean : clean
	rm -rf $(TARGET)

re : fclean all
