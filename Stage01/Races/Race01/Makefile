NAME = part_of_the_matrix


all: install

install:
	@clang -std=c11 -Wall -Wextra -Werror -Wpedantic src/*.c -o $(NAME)


uninstall: clean


reinstall: clean all


clean:
	@rm -f $(NAME)