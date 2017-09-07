CC=gcc
BIN=bin

default:
	echo "Chapter 5: Pointers and Arrays"

03-strlen: $(BIN)/03-strlen.out
	./$< Please count these strings

04-1-alloc: 05-strcpy

04-2-strlen: $(BIN)/04-strlen.out
	./$< Please count these strings

05-1-strcpy: $(BIN)/05-1-strcpy.out
	./$< Please copy my words

05-2-strcmp: $(BIN)/05-2-strcmp.out
	./$< string strign
	./$< string string

ex03: $(BIN)/ex03.out
	./$< concatenate my words

ex04: $(BIN)/ex04.out
	./$< helloworld ld
	./$< helloworld yourworld
	./$< helloworld thisismyworld

06-sortlines: $(BIN)/06-sortlines.out
	./$< < $(BIN)/06-lines.txt

07-date-conversion: $(BIN)/07-date-conversion.out
	./$<

08-month-name: $(BIN)/08-month-name.out
	./$< 0 1 2 3 4 5 6 7 8 9 10 11 12 13

ex09: $(BIN)/ex09.out
	./$<

10-1-echo: $(BIN)/10-1-echo.out
	./$< Oh, do you echo me?

10-2-find: $(BIN)/10-2-find.out
	./$< find < 10-command-line-arguments-2-find.c

10-3-find: $(BIN)/10-3-find.out
	./$<
	./$< -a find < 10-command-line-arguments-3-find.c
	./$< find < 10-command-line-arguments-3-find.c
	./$< -n find < 10-command-line-arguments-3-find.c
	./$< -x find < 10-command-line-arguments-3-find.c

11-sortlines: $(BIN)/11-sortlines.out
	./$< -n < $(BIN)/11-lines.txt


$(BIN)/03-strlen.out: 03-pointers-and-arrays--strlen.c
	$(CC) -o $@ $<

$(BIN)/04-strlen.out: 04-address-arithmetic-2-strlen.c
	$(CC) -o $@ $<

$(BIN)/05-1-strcpy.out: 05-character-pointers-and-functions-1-strcpy.c
	$(CC) -o $@ $<

$(BIN)/05-2-strcmp.out: 05-character-pointers-and-functions-2-strcmp.c
	$(CC) -o $@ $<

$(BIN)/ex03.out: ex03.c
	$(CC) -o $@ $<

$(BIN)/ex04.out: ex04.c
	$(CC) -o $@ $<

$(BIN)/06-sortlines.out: 06-pointer-arrays-pointers-to-pointers--sortlines.c
	$(CC) -o $@ $<

$(BIN)/07-date-conversion.out: 07-multi-dimensional-arrays--date-conversion.c
	$(CC) -o $@ $<

$(BIN)/08-month-name.out: 08-initialization-of-pointer-arrays--month-name.c
	$(CC) -o $@ $<

$(BIN)/ex09.out: ex09.c
	$(CC) -o $@ $<

$(BIN)/10-1-echo.out: 10-command-line-arguments-1-echo.c
	$(CC) -o $@ $<

$(BIN)/10-2-find.out: 10-command-line-arguments-2-find.c
	$(CC) -o $@ $<

$(BIN)/10-3-find.out: 10-command-line-arguments-3-find.c
	$(CC) -o $@ $<

$(BIN)/11-sortlines.out: 11-pointers-to-functions--sortlines.c
	$(CC) -o $@ $<

clean:
	$(RM) $(BIN)/*.out
