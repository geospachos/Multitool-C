CC=gcc

all: source/main.c source/calc.c source/devmode.c
	$(CC) source/main.c source/calc.c source/devmode.c -o multitool
