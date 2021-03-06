CH1=ch1-a-tutorial-introduction
CH2=ch2-types-operators-and-expressions
CH3=ch3-control-flow
CH4=ch4-functions-and-program-structure
CH5=ch5-pointers-and-arrays
CH6=ch6-structures
CH7=ch7-input-and-output

default:
	echo "\n==========\n" \
	"Hello, <tab> key will be extremely helpful to execute the examples and exercises.\n\n" \
  "e.g.,\n" \
	"make 1<tab><tab>: shows examples of chapter 1\n" \
  "make ex1<tab><tab>: shows exercises of chapter 1\n"


101-hello:
	$(MAKE) -C $(CH1) 01-hello

102-1-fc-table:
	$(MAKE) -C $(CH1) 02-1-fc-table

102-2-fc-table-float:
	$(MAKE) -C $(CH1) 02-2-fc-table-float

ex103:
	$(MAKE) -C $(CH1) ex03

ex104:
	$(MAKE) -C $(CH1) ex04

103-fc-table:
	$(MAKE) -C $(CH1) 03-fc-table

ex105:
	$(MAKE) -C $(CH1) ex05

104-fc-table:
	$(MAKE) -C $(CH1) 04-fc-table

105-1-file-copying:
	$(MAKE) -C $(CH1) 05-1-file-copying

ex107:
	$(MAKE) -C $(CH1) ex07

105-2-character-counting:
	$(MAKE) -C $(CH1) 05-2-character-counting

105-3-line-counting:
	$(MAKE) -C $(CH1) 05-3-line-counting

ex108:
	$(MAKE) -C $(CH1) ex08

ex109:
	$(MAKE) -C $(CH1) ex09

ex110:
	$(MAKE) -C $(CH1) ex10

105-4-word-counting:
	$(MAKE) -C $(CH1) 05-4-word-counting

ex112:
	$(MAKE) -C $(CH1) ex12

106-counting:
	$(MAKE) -C $(CH1) 06-counting

107-power:
	$(MAKE) -C $(CH1) 07-power

ex115:
	$(MAKE) -C $(CH1) ex15

108-power:
	$(MAKE) -C $(CH1) 08-power

109-longest:
	$(MAKE) -C $(CH1) 09-longest

ex117:
	$(MAKE) -C $(CH1) ex17

110-longest:
	$(MAKE) -C $(CH1) 10-longest



203-strlen:
	$(MAKE) -C $(CH2) 03-strlen

207-1-atoi-sum:
	$(MAKE) -C $(CH2) 07-1-atoi-sum

207-2-lower:
	$(MAKE) -C $(CH2) 07-2-lower

207-3-rand:
	$(MAKE) -C $(CH2) 07-3-rand

ex203:
	$(MAKE) -C $(CH2) ex03

208-1-squeeze:
	$(MAKE) -C $(CH2) 08-1-squeeze

208-2-strcat:
	$(MAKE) -C $(CH2) 08-2-strcat

ex204:
	$(MAKE) -C $(CH2) ex04

ex205:
	$(MAKE) -C $(CH2) ex05

209-getbits:
	$(MAKE) -C $(CH2) 09-getbits

ex206:
	$(MAKE) -C $(CH2) ex06

ex207:
	$(MAKE) -C $(CH2) ex07

ex208:
	$(MAKE) -C $(CH2) ex08

210-bitcount:
	$(MAKE) -C $(CH2) 10-bitcount

ex210:
	$(MAKE) -C $(CH2) ex10


303-binsearch:
	$(MAKE) -C $(CH3) 03-binsearch

ex301:
	$(MAKE) -C $(CH3) ex01

304-count:
	$(MAKE) -C $(CH3) 04-count

ex302:
	$(MAKE) -C $(CH3) ex02

305-1-atoi:
	$(MAKE) -C $(CH3) 05-1-atoi

305-2-shellsort:
	$(MAKE) -C $(CH3) 05-2-shellsort

305-3-reverse:
	$(MAKE) -C $(CH3) 05-3-reverse

306-itoa:
	$(MAKE) -C $(CH3) 06-itoa

307-trim:
	$(MAKE) -C $(CH3) 07-trim



401-grep:
	$(MAKE) -C $(CH4) 01-grep

ex401:
	$(MAKE) -C $(CH4) ex01

402-1-atof-sum:
	$(MAKE) -C $(CH4) 02-1-atof-sum

402-2-atoi-sum:
	$(MAKE) -C $(CH4) 02-2-atoi-sum

ex402:
	$(MAKE) -C $(CH4) ex02

403-reverse-polish-calculator:
	$(MAKE) -C $(CH4) 03-reverse-polish-calculator

405-reverse-polish-calculator:
	$(MAKE) -C $(CH4) 05-reverse-polish-calculator

410-1-printd:
	$(MAKE) -C $(CH4) 10-1-printd

410-2-quicksort:
	$(MAKE) -C $(CH4) 10-2-quicksort

ex413:
	$(MAKE) -C $(CH4) ex13

ex414:
	$(MAKE) -C $(CH4) ex14


503-strlen:
	$(MAKE) -C $(CH5) 03-strlen

504-1-alloc:
	$(MAKE) -C $(CH5) 04-1-alloc

504-2-strlen:
	$(MAKE) -C $(CH5) 04-2-strlen

505-1-strcpy:
	$(MAKE) -C $(CH5) 05-1-strcpy

505-2-strcmp:
	$(MAKE) -C $(CH5) 05-2-strcmp

ex503:
	$(MAKE) -C $(CH5) ex03

ex504:
	$(MAKE) -C $(CH5) ex504

506-sortlines:
	$(MAKE) -C $(CH5) 06-sortlines

507-date-conversion:
	$(MAKE) -C $(CH5) 07-date-conversion

508-month-name:
	$(MAKE) -C $(CH5) 08-month-name

ex509:
	$(MAKE) -C $(CH5) ex09

510-1-echo:
	$(MAKE) -C $(CH5) 10-1-echo

510-2-find:
	$(MAKE) -C $(CH5) 10-2-find

510-3-find:
	$(MAKE) -C $(CH5) 10-3-find

511-sortlines:
	$(MAKE) -C $(CH5) 11-sortlines



602-point-in-rect:
	$(MAKE) -C $(CH6) 02-point-in-rect

603-count-keywords:
	$(MAKE) -C $(CH6) 03-count-keywords

604-count-keywords:
	$(MAKE) -C $(CH6) 04-count-keywords

605-word-frequency:
	$(MAKE) -C $(CH6) 05-word-frequency

606-hashtable:
	$(MAKE) -C $(CH6) 06-hashtable

ex605:
	$(MAKE) -C $(CH6) ex05

607-word-frequency:
	$(MAKE) -C $(CH6) 07-word-frequency


703-minprintf:
	$(MAKE) -C $(CH7) 03-minprintf

705-cat:
	$(MAKE) -C $(CH7) 05-cat

706-cat:
	$(MAKE) -C $(CH7) 06-cat



clean:
	$(MAKE) -C $(CH1) clean
	$(MAKE) -C $(CH2) clean
	$(MAKE) -C $(CH3) clean
	$(MAKE) -C $(CH4) clean
	$(MAKE) -C $(CH5) clean
	$(MAKE) -C $(CH6) clean
	$(MAKE) -C $(CH7) clean
