COMP = gcc main.c
OUT = ./a.out
RUN = $(OUT)

all: compile run

compile:
	${COMP}

run:
	${RUN}
