CC=gcc
OUT=-o

all: main.c NS.c
	$(CC) main.c NS.c $(OUT)main