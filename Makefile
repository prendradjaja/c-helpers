.PHONY: run-tests

run-tests: tests/entry_point
	@./tests/entry_point

SOURCE_FILES = tests/entry_point.c \
tests/test_vector.c tests/test_grid.c tests/test_my_io.c \
grid.c my_io.c vector.c

tests/entry_point: $(SOURCE_FILES)
	gcc -Wall -Wno-unused-variable -o tests/entry_point $(SOURCE_FILES)

clean:
	rm -f tests/entry_point
