NAME := a.out
CPP := c++
RM := rm -f
CXXFLAG := -Wall -Wextra -Werror -std=c++98

SRCS := main.cpp\
		Fixed.cpp

HEADERS := Fixed.hpp\

OBJS = $(SRCS:.cpp=.o)

$(NAME) : $(OBJS)
	$(CPP) $(CPPFLAG) $(OBJS) -o $(NAME)

%.o: %.cpp $(HEADERS)
	$(CPP) $(CPPFLAG) -c $< -o $@

clean :
	$(RM) $(OBJS)

fclean : clean
	$(RM) $(NAME)

re : fclean $(NAME)