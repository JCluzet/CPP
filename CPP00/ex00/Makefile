#  |  |  ___ \    \  |         |
#  |  |     ) |  |\/ |   _  |  |  /   _ 
# ___ __|  __/   |   |  (   |    <    __/ 
#    _|  _____| _|  _| \__,_| _|\_\ \___|
#                              by jcluzet

################################################################################
#                                     CONFIG                                   #
################################################################################

NAME        := megaphone
BIMLX       := OFF
CC          := clang++
RM		    := rm -f
CFLAGS      := -Wall -Wextra -Werror
################################################################################
#                                 PROGRAM'S SRCS                               #
################################################################################

SRCS_DIR    := ./
SUB_DIR     := ./ 
OBJ_DIR 	:=	$(BUILD_DIR)/obj
DIRS		:=	$(OBJ_DIR) $(addprefix $(OBJ_DIR)/, $(SUB_DIR))
OBJS 	    :=	$(SRCS:%.c=$(OBJ_DIR)/%.o)
SRCS        :=  megaphone.cpp

################################################################################
#                                  Makefile  objs                              #
################################################################################


CLR_RMV		:= \033[0m
RED			:= \033[1;31m
GREEN		:= \033[1;32m
YELLOW		:= \033[1;33m
BLUE		:= \033[1;34m
CYAN 		:= \033[1;36m

$(NAME):	$(OBJS)
			@echo "\033[34mCompilation of $(NAME) ...\033[0m"
			@$(CC) $(CFLAGS) $(INCS) $(SRCS) -o $(NAME)
			@echo "\033[32m$(NAME) created\n\033[0m"

all:		$(NAME)

bonus:		all

clean:
			@ echo "Deleting $(CYAN)$(NAME) $(CLR_RMV)objs ..."
			@ $(RM) $(OBJS)
			@ rm -rf $(BUILD_DIR)

fclean:		clean
			@ echo "Deleting $(CYAN)$(NAME) $(CLR_RMV)binary ..."
			@ $(RM) $(NAME)

re:			fclean all

$(BUILD_DIR):
			@ echo "Creating $(RED) $(NAME) $(CLR_RMV)..."
			@ mkdir $(NAME) $(DIRS)

$(OBJ_DIR)/%.o:$(SRCS_DIR)/%.c ./incs/$(NAME).h | $(BUILD_DIR)
			@ echo "Compiling $(YELLOW) $< $(CLR_RMV)..."
			@ $(CC) $(CFLAGS) -c $< -o $(NAME) $(INCS)

.PHONY:		all clean fclean re
