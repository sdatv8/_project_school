NAME	=	libft.a

SRCS	=	ft_isalpha.c	ft_isdigit.c	ft_atoi.c		ft_isalnum.c	ft_isascii.c \
			ft_isprint.c	ft_memset.c		ft_strlcat.c	ft_strlcpy.c	ft_strlen.c \
			ft_tolower.c	ft_toupper.c	ft_memchr.c		ft_bzero.c		ft_memccpy.c \
			ft_memmove.c	ft_memcmp.c		ft_strrchr.c	ft_strchr.c		ft_strncmp.c \
			ft_strnstr.c	ft_calloc.c		ft_strdup.c		ft_substr.c		ft_strjoin.c

HEADER	=	libft.h
OBJ		=	$(patsubst %.c, %.o, $(SRCS))
OBJ_B	=	$(SRCS_B:%.c=%.o)

CC		=	gcc
CFLAGS	=	-Wall -Wextra -Werror -I$(HEADER)

.PHONY	:	all clean fclean re bonus

all		:	$(NAME)

$(NAME)	:	$(OBJ) $(HEADER)
	ar rcs $(NAME) $?

%.o		:	%.c $(HEADER)
	$(CC) $(FLAGS) -c $< -o $@

bonus	:
	@make OBJ="$(OBJ_B)" all

clean	:
	@rm -f $(OBJ) $(OBJ_B)

fclean	:	clean
	@$(RM) $(NAME)

re		:	fclean all