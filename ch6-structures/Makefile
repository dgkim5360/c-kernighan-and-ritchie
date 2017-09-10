CC=gcc
BIN=bin

default:
	echo "Chapter 6: Structures"

02-point-in-rect: $(BIN)/02-point-in-rect.out
	./$< -5 10
	./$< 50 88
	./$< 30 102

03-count-keywords: $(BIN)/03-count-keywords.out
	./$< < 03-arrays-of-structures--count-keywords.c

04-count-keywords: $(BIN)/04-count-keywords.out
	./$< < 04-pointers-to-structures--count-keywords.c

05-word-frequency: $(BIN)/05-word-frequency.out
	./$< < 05-self-referential-structures--word-frequency.c

06-hashtable: $(BIN)/06-hashtable.out
	./$<

ex05: $(BIN)/ex05.out
	./$<

07-word-frequency: $(BIN)/07-word-frequency.out
	./$< < 07-typedef--word-frequency.c


$(BIN)/02-point-in-rect.out: 02-structures-and-functions--point-in-rect.c
	$(CC) -o $@ $<

$(BIN)/03-count-keywords.out: 03-arrays-of-structures--count-keywords.c
	$(CC) -o $@ $< ../ch4-functions-and-program-structure/05-header-files--getch.c

$(BIN)/04-count-keywords.out: 04-pointers-to-structures--count-keywords.c
	$(CC) -o $@ $< ../ch4-functions-and-program-structure/05-header-files--getch.c

$(BIN)/05-word-frequency.out: 05-self-referential-structures--word-frequency.c
	$(CC) -o $@ $< ../ch4-functions-and-program-structure/05-header-files--getch.c

$(BIN)/06-hashtable.out: 06-table-lookup--hashtable.c
	$(CC) -o $@ $<

$(BIN)/ex05.out: ex05.c
	$(CC) -o $@ $<

$(BIN)/07-word-frequency.out: 07-typedef--word-frequency.c
	$(CC) -o $@ $< ../ch4-functions-and-program-structure/05-header-files--getch.c


clean:
	$(RM) $(BIN)/*.out
