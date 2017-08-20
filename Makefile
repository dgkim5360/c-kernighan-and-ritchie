CH1=ch1-a-tutorial-introduction
Ch2=ch2-types-operators-and-expressions

default:
	echo "Hello"


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


clean:
	$(MAKE) -C $(CH1) clean
