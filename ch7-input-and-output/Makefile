CC=gcc
BIN=bin

default:
	echo "Chapter 7: Input and Output"

03-minprintf: $(BIN)/03-minprintf.out
	./$<

05-cat: $(BIN)/05-cat.out
	./$< 03-variable-length-argument-lists--minprintf.c 05-file-access--cat.c a-file-not-existing.c

06-cat: $(BIN)/06-cat.out
	./$< 03-variable-length-argument-lists--minprintf.c 05-file-access--cat.c a-file-not-existing.c


$(BIN)/03-minprintf.out: 03-variable-length-argument-lists--minprintf.c
	$(CC) -o $@ $<

$(BIN)/05-cat.out: 05-file-access--cat.c
	$(CC) -o $@ $<

$(BIN)/06-cat.out: 06-error-handling-stderr-and-exit--cat.c
	$(CC) -o $@ $<


clean:
	$(RM) $(BIN)/*.out
