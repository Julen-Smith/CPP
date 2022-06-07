SRCS			= main.cpp HumanA.cpp HumanB.cpp Weapon.cpp
OBJS			= $(SRCS:.cpp=.o)

CXX				= clang++
RM				= rm -f
CXXFLAGS		= -Wall -Wextra -Werror -I. -fsanitize=address -g3

NAME			= Violence

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