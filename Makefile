all: 
	hw1

clean: 
	rm hw1

hw1: hw1.c
	gcc hw1.c -o hw1 

run:
	./hw1 parameter1 parameter2
