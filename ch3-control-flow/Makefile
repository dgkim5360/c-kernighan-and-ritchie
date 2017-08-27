CC=gcc
BIN=bin

default:
	echo "Chapter 3: Control Flow"

03-binsearch: $(BIN)/03-binsearch.out
	./$< 0 1 5 54 1001

ex01: $(BIN)/ex01.out
	./$< 0 1 5 54 1001

04-count: $(BIN)/04-count.out
	./$< < 04-switch--count.c

ex02: $(BIN)/ex02.out
	./$<

05-1-atoi: $(BIN)/05-1-atoi.out
	./$< 123 456 789 -1000

05-2-shellsort: $(BIN)/05-2-shellsort.out
	./$<

05-3-reverse: $(BIN)/05-3-reverse.out
	./$< hello, my name is don!

06-itoa: $(BIN)/06-itoa.out
	./$<

07-trim: $(BIN)/07-trim.out
	./$<


$(BIN)/03-binsearch.out: 03-else-if--binsearch.c
	$(CC) -o $@ $<

$(BIN)/ex01.out: ex01.c
	$(CC) -o $@ $<

$(BIN)/04-count.out: 04-switch--count.c
	$(CC) -o $@ $<

$(BIN)/ex02.out: ex02.c
	$(CC) -o $@ $<

$(BIN)/05-1-atoi.out: 05-loops-while-and-for-1-atoi.c
	$(CC) -o $@ $<

$(BIN)/05-2-shellsort.out: 05-loops-while-and-for-2-shellsort.c
	$(CC) -o $@ $<

$(BIN)/05-3-reverse.out: 05-loops-while-and-for-3-reverse.c
	$(CC) -o $@ $<

$(BIN)/06-itoa.out: 06-loops-do-while--itoa.c
	$(CC) -o $@ $<

$(BIN)/07-trim.out: 07-break-and-continue--trim.c
	$(CC) -o $@ $<

	
clean:
	$(RM) $(BIN)/*.out
