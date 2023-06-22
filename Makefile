flags = -Wall -Wextra
test_obj := $(filter-out main.c, $(wildcard *.c))

build:
	@mkdir -p bin
	@gcc $(flags) main.c -o bin/cproj

run: build
	@./bin/cproj

test:
	@mkdir -p bin
	@gcc $(flags) $(test_obj) -o bin/cproj_test 
	@./bin/cproj_test