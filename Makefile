all:
	gcc src/array.c tests/test.c -o test -lcheck -pthread -lcheck_pic -pthread -lrt -lm -lsubunit