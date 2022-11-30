NAME = FragTrap

CPPFLAGS = -Wall -Wextra -Werror -std=c++98

SRC = main.cpp ClapTrap.cpp ScavTrap.cpp FragTrap.cpp
 
INC = ClapTrap.hpp ScavTrap.hpp FragTrap.hpp

OBJS = $(SRC:.cpp=.o)

all : $(NAME)

$(NAME) : $(OBJS)
	c++ $(CPPFLAGS) $^ -o $(NAME)

%.o : %.cpp $(INC)
	c++ $(CPPFLAGS) -c $< -o $@

clean :
	rm -f $(OBJS)

fclean : clean
	rm -f $(NAME)

re : fclean $(NAME)