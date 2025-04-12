NAME = phonebook
CC = g++
CFLAGS = -std=c++98 -Wall -Wextra -Werror

SRCS = main.cpp\
		Contact.cpp\
		PhoneBook.cpp\
		utils.cpp\

OBJS = $(SRCS:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) -o $@ $^ $(CFLAGS)

%.o: %.C
	$(CC) -c $< -o $@

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
