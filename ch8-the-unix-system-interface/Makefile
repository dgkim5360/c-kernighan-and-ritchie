CC=gcc
BIN=bin

default:
	echo "Chapter 8: The UNIX System Interface"

02-filecopy: $(BIN)/02-filecopy.out
	./$< < 02-low-level-io-read-and-write-1-filecopy.c

03-cp: $(BIN)/03-cp.out
	./$< 03-open-creat-close-unlink--copy.c $(BIN)/copied.c


$(BIN)/02-filecopy.out: 02-low-level-io-read-and-write-1-filecopy.c
	$(CC) -o $@ $<

$(BIN)/03-cp.out: 03-open-creat-close-unlink--copy.c
	$(CC) -o $@ $<


clean:
	$(RM) $(BIN)/*.out
