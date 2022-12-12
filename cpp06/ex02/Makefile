NAME = Base

CPPFLAGS = -Wall -Wextra -Werror -std=c++98

SRC = main.cpp Base.cpp
INC = Base.hpp C.hpp B.hpp A.hpp 
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