NAME = Robot

CPPFLAGS = -Wall -Wextra -Werror -std=c++98

SRC = main.cpp Bureaucrat.cpp RobotomyRequestForm.cpp PresidentialPardonForm.cpp \
		AForm.cpp
INC = Bureaucrat.hpp RobotomyRequestForm.hpp PresidentialPardonForm.hpp \
		AForm.hpp
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