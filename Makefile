flags = -Wall -Wextra
test_obj := $(filter-out main.c, $(wildcard *.c))
build_obj := $(filter-out test.c, $(wildcard *.c))

build:
	@mkdir -p bin
	@gcc $(flags) $(build_obj) -o bin/cproj

run: build
	@./bin/cproj

test:
	@mkdir -p bin
	@gcc $(flags) $(test_obj) -o bin/cproj_test 
	./bin/cproj_test
