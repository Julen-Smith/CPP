SRCS			= main.cpp Zombie.cpp ZombieHorde.cpp 
OBJS			= $(SRCS:.cpp=.o)

CXX				= c++
RM				= rm -f
CXXFLAGS		= -Wall -Wextra -Werror -I.

NAME			= ZombieHorde

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