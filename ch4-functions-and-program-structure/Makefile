CC=gcc
BIN=bin

default:
	echo "Chapter 4: Functions and Program Structure"

01-grep: $(BIN)/01-grep.out
	./$< < $(BIN)/01-text.txt

ex01: $(BIN)/ex01.out
	./$< < $(BIN)/01-text.txt

02-1-atof-sum: $(BIN)/02-1-atof-sum.out
	./$< < $(BIN)/02-1-atof.txt

02-2-atoi-sum: $(BIN)/02-2-atoi-sum.out
	./$< < $(BIN)/02-2-atoi.txt

ex02: $(BIN)/ex02.out
	./$< < $(BIN)/ex02.txt

03-reverse-polish-calculator: $(BIN)/03-reverse-polish-calculator.out
	./$< < $(BIN)/03-polish-calculator.txt

ex03: $(BIN)/ex03.out
	./$< < $(BIN)/03-polish-calculator.txt

05-reverse-polish-calculator: $(BIN)/05-reverse-polish-calculator.out
	./$< < $(BIN)/03-polish-calculator.txt

10-1-printd: $(BIN)/10-1-printd.out
	./$<

10-2-quicksort: $(BIN)/10-2-quicksort.out
	./$<

ex13: $(BIN)/ex13.out
	./$< hello, my name is don!

ex14: $(BIN)/ex14.out
	./$<


$(BIN)/01-grep.out: 01-basics-of-functions--grep.c
	$(CC) -o $@ $<

$(BIN)/ex01.out: ex01.c
	$(CC) -o $@ $<

$(BIN)/02-1-atof-sum.out: 02-functions-returning-non-integers-1-atof-sum.c
	$(CC) -o $@ $<

$(BIN)/02-2-atoi-sum.out: 02-functions-returning-non-integers-2-atoi-sum.c
	$(CC) -o $@ $<

$(BIN)/ex02.out: ex02.c
	$(CC) -o $@ $< -lm

$(BIN)/03-reverse-polish-calculator.out: 03-external-variables--reverse-polish-calculator.c
	$(CC) -o $@ $<

$(BIN)/ex03.out: ex03.c
	$(CC) -o $@ $<

$(BIN)/05-reverse-polish-calculator.out: 05-header-files--main.c 05-header-files--getop.c 05-header-files--getch.c 05-header-files--stack.c 05-header-files--calc.h
	$(CC) -o $@ $?

$(BIN)/10-1-printd.out: 10-recursion-1-printd.c
	$(CC) -o $@ $<

$(BIN)/10-2-quicksort.out: 10-recursion-2-qsort.c
	$(CC) -o $@ $<

$(BIN)/ex13.out: ex13.c
	$(CC) -o $@ $<

$(BIN)/ex14.out: ex14.c
	$(CC) -o $@ $<

clean:
	$(RM) $(BIN)/*.out
