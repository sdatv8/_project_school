NAME	=	libft.a
#
SRCS	=	ft_isalpha.c		ft_digit.c			ft_isalnum.c
			ft_isascii.c		ft_isprint.c		ft_strlen.c
#
SRCS_B	=	ft_lstnew.c
#
HEADER	=	libft.h
OBJ		=	$(patsubst %.c, %.o, $(SRCS))
OBJ_B	=	$(SRCS_B:$.c=%.o)
#
CC		=	gcc
CFLAGS	=	-Wall -Wextra -Werror -Is(HEADER)
#
.PHONY	:	all clean fclean re bonus
#
all		:	$(NAME)
#
$(NAME)	:	$(OBJ) $(HEADER)
	ar rcs $(NAME) $?
#
%.o	:	%.c(HEADER)
	$(CC)	$(CFLAGS) -c $< -o $@
#
bonus	:
	@make OBJ="$(OBJ_B" all
#
clean	:
	@rm -f $(OBJ)	$(OBJ_B)
#
flecan	:	clean
	@$(RM) $(NAME)
#
re		:	fclean all