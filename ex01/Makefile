NAME = phonebook

SRCS = phonebook.cpp

OBJS = $(SRCS:.cpp=.o)

CC = c++
CFLAGS = -std=c++98 -Wall -Wextra -Werror

RM = rm -rf

all: $(NAME)
	printf "\n$(GREEN)✅ $(NAME) is up to date$(WHITE) 👏\n"

$(OBJS): %.o	: %.cpp Makefile
	printf "\033[2K\r$(YELLOW)⏳ Compiling:$(WHITE) $< 🤞\n"
	$(CC) $(CFLAGS) -c $< -o $@

$(NAME): $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) -o $(NAME)

clean:
	$(RM) $(OBJS)
	printf "$(RED)👌 Files has been deleted in ($(NAME))$(WHITE)\n"  
	printf "$(GREEN)✅ Clean 👍$(WHITE)\n"  

fclean: clean
	$(RM) $(NAME)
	printf "$(RED)👌 $(NAME) has been deleted$(WHITE)\n"  

re: fclean all
.PHONY: all git clean fclean re
.SILENT:
