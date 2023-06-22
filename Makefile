flags = -Wall -Wextra
test_obj := $(filter-out main.c, $(wildcard *.c))

build:
	@gcc $(flags) main.c -o bin/cproj

run: build
	@./bin/cproj

test:
	@gcc $(flags) $(test_obj) -o bin/cproj_test 
	@./bin/cproj_test