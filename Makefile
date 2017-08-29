CH1=ch1-a-tutorial-introduction
CH2=ch2-types-operators-and-expressions
CH3=ch3-control-flow
CH4=ch4-functions-and-program-structure

default:
	echo "\n==========\n" \
	"Hello, <tab> key will be extremely helpful to execute the examples and exercises.\n\n" \
  "e.g.,\n" \
	"1<tab><tab>: shows examples of chapter 1\n" \
  "ex1<tab><tab>: shows exercises of chapter 1\n"


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

clean:
	$(MAKE) -C $(CH1) clean
	$(MAKE) -C $(CH2) clean
	$(MAKE) -C $(CH3) clean
	$(MAKE) -C $(CH4) clean
