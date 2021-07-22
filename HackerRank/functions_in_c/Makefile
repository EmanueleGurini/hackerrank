all: eseguibile

%.o: %.c 
	gcc -c $<

eseguibile: functions_in_c.o
	gcc -o eseguibile functions_in_c.o

clean: 
	rm functions_in_c.o eseguibile
