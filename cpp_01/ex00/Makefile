SRCS =	main.cpp \
		Zombie.cpp \
		newZombie.cpp \
		randomChump.cpp

SRCS_OBJ = $(SRCS:.cpp=.o)

CC = c++ -std=c++98

CFLAGS = -Wall -Wextra -Werror

NAME = Zombie

all : ${NAME}

.cpp.o:
	${CC} ${CFLAGS} -c $< -o ${<:.cpp=.o} 

${NAME} : ${SRCS_OBJ}
	${CC} ${CFLAGS} -o ${NAME} ${SRCS_OBJ}

clean :
	rm -f ${SRCS_OBJ}

fclean : clean
	rm -f ${NAME}

re : fclean all

.PHONY : all clean fclean re
