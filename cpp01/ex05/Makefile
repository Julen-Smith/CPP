SRCS			= main.cpp Karen.cpp
OBJS			= $(SRCS:.cpp=.o)

CXX				= clang++
RM				= rm -f
CXXFLAGS		= -Wall -Wextra -Werror -I.

NAME			= Karen

all:			$(NAME)

$(NAME):		$(OBJS)
				@$(CXX) $(CXXFLAGS) -o $(NAME) $(OBJS)
				@echo "Compiled!!"

clean:
				@$(RM) $(OBJS)

fclean:			clean
				@$(RM) $(NAME)
				@echo "Deleted!"

re:				fclean $(NAME)

.PHONY:			all clean fclean re test