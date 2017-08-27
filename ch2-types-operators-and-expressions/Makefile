CC=gcc
BIN=bin

default:
	echo "Chapter 2: Types. Operators and Expressions"


03-strlen: $(BIN)/03-strlen.out
	./$< Please count these strings

07-1-atoi-sum: $(BIN)/07-1-atoi-sum.out
	./$< 123 456 789

07-2-lower: $(BIN)/07-2-lower.out
	./$< Hello pLease lOwer THESE worDS

07-3-rand: $(BIN)/07-3-rand.out
	./$< 54321 10

ex03: $(BIN)/ex03.out
	./$<

08-1-squeeze: $(BIN)/08-1-squeeze.out
	./$< hellllllo l

08-2-strcat: $(BIN)/08-2-strcat.out
	./$< concatenate my words

ex04: $(BIN)/ex04.out
	./$< hellomyfriends elm

ex05: $(BIN)/ex05.out
	./$< hellomyfriends elm

09-getbits: $(BIN)/09-getbits.out
	./$<

ex06: $(BIN)/ex06.out
	./$<

ex07: $(BIN)/ex07.out
	./$<

ex08: $(BIN)/ex08.out
	./$<

10-bitcount: $(BIN)/10-bitcount.out
	./$< 11 4245 234232

ex10: $(BIN)/ex10.out
	./$< Hello pLease lOwer THESE worDS


$(BIN)/03-strlen.out: 03-constants--strlen.c
	$(CC) -o $@ $<

$(BIN)/07-1-atoi-sum.out: 07-type-conversions-1-atoi.c
	$(CC) -o $@ $<

$(BIN)/07-2-lower.out: 07-type-conversions-2-lower.c
	$(CC) -o $@ $<

$(BIN)/07-3-rand.out: 07-type-conversions-3-rand.c
	$(CC) -o $@ $<

$(BIN)/ex03.out: ex03.c
	$(CC) -o $@ $<

$(BIN)/08-1-squeeze.out: 08-increment-and-decrement-operators-1-squeeze.c
	$(CC) -o $@ $<

$(BIN)/08-2-strcat.out: 08-increment-and-decrement-operators-2-strcat.c
	$(CC) -o $@ $<

$(BIN)/ex04.out: ex04.c
	$(CC) -o $@ $<

$(BIN)/ex05.out: ex05.c
	$(CC) -o $@ $<

$(BIN)/09-getbits.out: 09-bitwise-operators--getbits.c
	$(CC) -o $@ $<

$(BIN)/ex06.out: ex06.c
	$(CC) -o $@ $<

$(BIN)/ex07.out: ex07.c
	$(CC) -o $@ $<

$(BIN)/ex08.out: ex08.c
	$(CC) -o $@ $<

$(BIN)/10-bitcount.out: 10-assignment-operators-and-expressions--bitcount.c
	$(CC) -o $@ $<

$(BIN)/ex10.out: ex10.c
	$(CC) -o $@ $<

clean:
	$(RM) $(BIN)/*.out
