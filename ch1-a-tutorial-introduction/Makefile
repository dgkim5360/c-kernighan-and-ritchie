CC=gcc
BIN=bin

default:
	echo "Chapter 1: A Tutorial Introduction"

01-hello: $(BIN)/01-hello.out
	./$<

02-1-fc-table: $(BIN)/02-1-fc-table.out
	./$<

02-2-fc-table-float: $(BIN)/02-2-fc-table-float.out
	./$<

ex03: $(BIN)/ex03.out
	./$<

ex04: $(BIN)/ex04.out
	./$<

03-fc-table: $(BIN)/03-fc-table.out
	./$<

ex05: $(BIN)/ex05.out
	./$<

04-fc-table: $(BIN)/04-fc-table.out
	./$<

05-1-file-copying: $(BIN)/05-1-file-copying.out
	./$< < 05-character-input-and-output-1-file-copying.c

ex07: $(BIN)/ex07.out
	./$< < ex07.c

05-2-character-counting: $(BIN)/05-2-character-counting.out
	./$< < 05-character-input-and-output-2-character-counting.c

05-3-line-counting: $(BIN)/05-3-line-counting.out
	./$< < 05-character-input-and-output-3-line-counting.c

ex08: $(BIN)/ex08.out
	./$< < ex08.c

ex09: $(BIN)/ex09.out
	./$< < ex09.c

ex10: $(BIN)/ex10.out
	./$< < ex10.c

05-4-word-counting: $(BIN)/05-4-word-counting.out
	./$< < 05-character-input-and-output-4-word-counting.c

ex12: $(BIN)/ex12.out
	./$< < ex12.c

06-counting: $(BIN)/06-counting.out
	./$< < 06-arrays--counting.c

07-power: $(BIN)/07-power.out
	./$<

ex15: $(BIN)/ex15.out
	./$<

08-power: $(BIN)/08-power.out
	./$<

09-longest: $(BIN)/09-longest.out
	./$< < 09-character-arrays--print-longest-line.c

ex17: $(BIN)/ex17.out
	./$< < ex17.c

10-longest: $(BIN)/10-longest.out
	./$< < 10-external-variables-and-scope--print-longest-line.c



$(BIN)/01-hello.out: 01-getting-started--helloworld.c
	$(CC) -o $@ $<

$(BIN)/02-1-fc-table.out: 02-variables-and-arithmetic-expressions-1-fc-table.c
	$(CC) -o $@ $<

$(BIN)/02-2-fc-table-float.out: 02-variables-and-arithmetic-expressions-2-fc-table-float.c
	$(CC) -o $@ $<

$(BIN)/ex03.out: ex03.c
	$(CC) -o $@ $<

$(BIN)/ex04.out: ex04.c
	$(CC) -o $@ $<

$(BIN)/03-fc-table.out: 03-the-for-statement--fc-table.c
	$(CC) -o $@ $<

$(BIN)/ex05.out: ex05.c
	$(CC) -o $@ $<

$(BIN)/04-fc-table.out: 04-symbolic-constants--fc-table.c
	$(CC) -o $@ $<

$(BIN)/05-1-file-copying.out: 05-character-input-and-output-1-file-copying.c
	$(CC) -o $@ $<

$(BIN)/ex07.out: ex07.c
	$(CC) -o $@ $<

$(BIN)/05-2-character-counting.out: 05-character-input-and-output-2-character-counting.c
	$(CC) -o $@ $<

$(BIN)/05-3-line-counting.out: 05-character-input-and-output-3-line-counting.c
	$(CC) -o $@ $<

$(BIN)/ex08.out: ex08.c
	$(CC) -o $@ $<

$(BIN)/ex09.out: ex09.c
	$(CC) -o $@ $<

$(BIN)/ex10.out: ex10.c
	$(CC) -o $@ $<

$(BIN)/05-4-word-counting.out: 05-character-input-and-output-4-word-counting.c
	$(CC) -o $@ $<

$(BIN)/ex12.out: ex12.c
	$(CC) -o $@ $<

$(BIN)/06-counting.out: 06-arrays--counting.c
	$(CC) -o $@ $<

$(BIN)/07-power.out: 07-functions--power.c
	$(CC) -o $@ $<

$(BIN)/ex15.out: ex15.c
	$(CC) -o $@ $<

$(BIN)/08-power.out: 08-arguments-call-by-value--power.c
	$(CC) -o $@ $<

$(BIN)/09-longest.out: 09-character-arrays--print-longest-line.c
	$(CC) -o $@ $<

$(BIN)/ex17.out: ex17.c
	$(CC) -o $@ $<

$(BIN)/10-longest.out: 10-external-variables-and-scope--print-longest-line.c
	$(CC) -o $@ $<


clean:
	$(RM) $(BIN)/*.out
