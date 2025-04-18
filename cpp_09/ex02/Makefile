SRCS =	main.cpp \
		PmergeMe.cpp

SRCS_OBJ = $(SRCS:.cpp=.o)

CC = c++ -std=c++98

CFLAGS = -Wall -Wextra -Werror

NAME = PmergeMe


.cpp.o:
	${CC} ${CFLAGS} -c $< -o ${<:.cpp=.o} 

${NAME} : ${SRCS_OBJ}
	${CC} ${CFLAGS} -o ${NAME} ${SRCS_OBJ}

all : ${NAME}

clean :
	rm -f ${SRCS_OBJ}

fclean : clean
	rm -f ${NAME}

re : fclean all

.PHONY : all clean fclean re
